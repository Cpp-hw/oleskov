#pragma once
#include "Shape_2D.h"
class Triangle :
	public Shape_2D
{
private:
	float edge1;
	float edge2;
	float edge3;

	bool Input_Validation(float edge);
public:
	Triangle();
	Triangle(float e1, float e2, float e3);
	void SetEdge1(float edge);
	float GetEdge1();
	void SetEdge2(float edge);
	float GetEdge2();
	void SetEdge3(float edge);
	float GetEdge3();
	virtual void InputShapeEdges();
	virtual double Area();
	virtual void ShowData();
	~Triangle();
};
