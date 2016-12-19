#include "Square.h"
#include <iostream>
#include <iomanip>

using namespace std;

bool Square::Input_Validation(float edge)
{
	return edge >= 0.01;
}

Square::Square()
{
	edge = 0.01;
}

Square::Square(float e1)
{
	if (!Input_Validation(e1))
	{
		cout << "The edge should be more than 0.01." << endl;
		edge = 0.01;
		cout << "Let's use the default size of this edge: " << edge << "\n";
	}
	else
		edge = e1;
}

void Square::SetEdge(float edge)
{
	if (!Input_Validation(edge))
	{
		cout << "The edge should be more than 0.01." << endl;
		this->edge = 0.01;
		cout << "Let's use the default size of this edge: " << this->edge << "\n";
	}
	else
		this->edge = edge;
}

float Square::GetEdge()
{
	return edge;
}

void Square::InputShapeEdges()
{
	float e1;

	do
	{
		cout << "Input an edge: ";
		cin >> e1;

		if (Input_Validation(e1))
			SetEdge(e1);
		else
			cout << "The edge should be more than 0.01." << endl;
	} while (!Input_Validation(e1));
}

double Square::Area()
{
	return pow(edge, 2);
}

void Square::ShowData()
{
	cout << setw(12) << "Square" << "\n- edge:" << setw(10) << edge << endl;
}

Square::~Square() { }
