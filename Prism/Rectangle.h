#pragma once
#include "Shape_2D.h"
class Rectangle :
	public Shape_2D
{
private:
	float edge1;
	float edge2;

	bool Input_Validation(float edge);
public:
	Rectangle();
	Rectangle(float e1, float e2);
	void SetEdge1(float edge);
	float GetEdge1();
	void SetEdge2(float edge);
	float GetEdge2();
	virtual void InputShapeEdges();
	virtual double Area();
	virtual void ShowData();
	~Rectangle();
};