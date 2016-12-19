#include "Triangle.h"
#include "Wrong_data.h"
#include <iostream>
#include <iomanip>

using namespace std;

bool Triangle::Input_Validation(float edge)
{
	return edge >= 0.01;
}

Triangle::Triangle()
{
	edge1 = 0.01;
	edge2 = 0.01;
	edge3 = 0.01;
}

Triangle::Triangle(float e1, float e2, float e3)
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

	if (!Input_Validation(e3))
	{
		cout << "The edge should be more than 0.01." << endl;
		edge3 = 0.01;
		cout << "Let's use the default size of this edge: " << edge3 << "\n";
	}
	else
		edge3 = e3;
}

void Triangle::SetEdge1(float edge)
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

float Triangle::GetEdge1()
{
	return edge1;
}

void Triangle::SetEdge2(float edge)
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

float Triangle::GetEdge2()
{
	return edge2;
}

void Triangle::SetEdge3(float edge)
{
	if (!Input_Validation(edge))
	{
		cout << "The edge should be more than 0.01." << endl;
		edge3 = 0.01;
		cout << "Let's use the default size of this edge: " << edge3 << "\n";
	}
	else
		edge3 = edge;
}

float Triangle::GetEdge3()
{
	return edge3;
}

void Triangle::InputShapeEdges()
{
	float e1, e2, e3;

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

	do
	{
		cout << "Input the third edge: ";
		cin >> e3;

		if (Input_Validation(e3))
			SetEdge3(e3);
		else
			cout << "The edge should be more than 0.01." << endl;
	} while (!Input_Validation(e3));

}

double Triangle::Area()
{
	if ((edge1 + edge2 > edge3) && (edge1 + edge3 > edge2) && (edge2 + edge3 > edge1))
	{
		double p = (edge1 + edge2 + edge3) / 2;
		return  sqrt(p * (p - edge1) * (p - edge2) * (p - edge3));
	}
	else throw new Wrong_data;
}

void Triangle::ShowData()
{
	cout << setw(12) << "Triangle" << "\n- edge 1:" << setw(10) << edge1 << "\n- edge 2:" <<
		setw(10) << edge2 << "\n- edge 3:" << setw(10) << edge3 << endl;
}
Triangle::~Triangle()
{
}