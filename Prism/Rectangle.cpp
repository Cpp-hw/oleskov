#include "Rectangle.h"
#include <iostream>
#include <iomanip>

using namespace std;

bool Rectangle::Input_Validation(float edge)
{
	return edge >= 0.01;
}

Rectangle::Rectangle()
{
	edge1 = 0.01;
	edge2 = 0.01;
}

Rectangle::Rectangle(float e1, float e2)
{
	if (!Input_Validation(e1))
	{
		cout << "The edge should be more than 0.01." << endl;
		edge1 = 0.01;
		cout << "Let's use the default size of this edge: " << edge1 << "\n";
	}
	else
		edge1 = e1;

	if (!Input_Validation(e2))
	{
		cout << "The edge should be more than 0.01." << endl;
		edge2 = 0.01;
		cout << "Let's use the default size of this edge: " << edge2 << "\n";
	}
	else
		edge2 = e2;
}

void Rectangle::SetEdge1(float edge)
{
	if (!Input_Validation(edge))
	{
		cout << "The edge should be more than 0.01." << endl;
		edge1 = 0.01;
		cout << "Let's use the default size of this edge: " << edge1 << "\n";
	}
	else
		edge1 = edge;
}

float Rectangle::GetEdge1()
{
	return edge1;
}

void Rectangle::SetEdge2(float edge)
{
	if (!Input_Validation(edge))
	{
		cout << "The edge should be more than 0.01." << endl;
		edge2 = 0.01;
		cout << "Let's use the default size of this edge: " << edge2 << "\n";
	}
	else
		edge2 = edge;
}

float Rectangle::GetEdge2()
{
	return edge2;
}

void Rectangle::InputShapeEdges()
{
	float e1, e2;

	do
	{
		cout << "Input the first edge: ";
		cin >> e1;

		if (Input_Validation(e1))
			SetEdge1(e1);
		else
			cout << "The edge should be more than 0.01." << endl;
	} while (!Input_Validation(e1));

	do
	{
		cout << "Input the second edge: ";
		cin >> e2;

		if (Input_Validation(e2))
			SetEdge2(e2);
		else
			cout << "The edge should be more than 0.01." << endl;
	} while (!Input_Validation(e2));
}

double Rectangle::Area()
{
	return edge1 * edge2;
}

void Rectangle::ShowData()
{
	cout << setw(12) << "Rectangle" << "\n- edge 1:" << setw(10) << edge1 << "\n- edge 2:" <<
		setw(10) << edge2 << endl;
}

Rectangle::~Rectangle()
{
}