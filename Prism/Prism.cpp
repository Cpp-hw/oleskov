#include "Prism.h"
#include <iostream>
#include <iomanip>
#include "Triangle.h"
#include "Wrong_data.h"
#include "Square.h"
#include "Rectangle.h"

using namespace std;

bool Prism::Input_Validation(float height)
{
	return height >= 0.01;
}

bool Prism::Input_Validation(int edges)
{
	return edges >= 3;
}

Prism::Prism()
{
	height = 0.01;
	edges_number = 3;
	if (edges_number == 3)
		base = new Triangle();
}

Prism::Prism(float height, int edges)
{
	if (!Input_Validation(height))
	{
		cout << "The height should be more than 0.01." << endl;
		this->height = 0.01;
		cout << "Let's use the default size of the height: " << height << "\n";
	}
	else
		this->height = height;

	if (!Input_Validation(edges))
	{
		cout << "The number of edges should be equal or more than 3." << endl;
		edges_number = 3;
		cout << "Let's use the default number of edges: " << edges_number << "\n";
	}
	else
		edges_number = edges;

	if (edges == 3)
	{
		base = new Triangle();
		base->InputShapeEdges();
	}
}

void Prism::SetHeight(float height)
{
	if (!Input_Validation(height))
	{
		cout << "The height should be more than 0.01." << endl;
		this->height = 0.01;
		cout << "Let's use the default size of the height: " << height << "\n";
	}
	else
		this->height = height;
}

float Prism::GetHeight()
{
	return height;
}

void Prism::SetEdgesNumber(int edges)
{
	if (!Input_Validation(edges))
	{
		cout << "The number of edges should be equal or more than 3." << endl;
		edges_number = 3;
		cout << "Let's use the default number of edges: " << edges_number << "\n";
	}
	else
		edges_number = edges;
}

float Prism::GetEdgesNumber()
{
	return edges_number;
}

void Prism::SetShape(int edges)
{
	if (edges == 3)
	{
		base = new Triangle();
		base->InputShapeEdges();
	}
	else if (edges == 4)
	{
		cout << "Is it a square? (\"Yes\" - press \"y\". \"No\" - press \"n\"." << endl;
		char choice;
		cin >> choice;
		if (choice == 'y' || choice == 'Y')
		{
			base = new Square();
			base->InputShapeEdges();
		}
		else if (choice == 'n' || choice == 'N')
		{
			cout << "Is it a rectangle? (\"Yes\" - press \"y\". \"No\" - press \"n\"." << endl;
			cin >> choice;
			if (choice == 'y' || choice == 'Y')
			{
				base = new Rectangle();
				base->InputShapeEdges();
			}
		}
		else
			throw new Wrong_data;
	}
}

void Prism::InputPrism()
{
	float h;
	int edges;

	do
	{
		cout << "Input the height of your prism: ";
		cin >> h;

		SetHeight(h);
	} while (!Input_Validation(h));

	do
	{
		cout << "Input the number of sides: ";
		cin >> edges;

		SetEdgesNumber(edges);
	} while (!Input_Validation(edges));

	SetShape(edges);
}

double Prism::PrismVolume()
{
	double volume = 0;
	volume = height * base->Area();

	return volume;
}

void Prism::ShowPrismData()
{
	cout << "Prism:\n" << "- height:" << setw(10) << height << "\n- base:" << setw(10);
	base->ShowData();
	cout << "- volume:" << setw(10) << PrismVolume();
}

Prism::~Prism()
{
	delete base;
}