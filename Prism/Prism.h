#pragma once
#include "Shape_2D.h"
class Prism
{
private:
	float height;
	int edges_number;
	Shape_2D * base;

	bool Input_Validation(float height);
	bool Input_Validation(int edges);
public:
	Prism();
	Prism(float height, int edges);
	void SetHeight(float height);
	float GetHeight();
	void SetEdgesNumber(int edges);
	float GetEdgesNumber();
	void SetShape(int edges);
	void InputPrism();
	double PrismVolume();
	void ShowPrismData();
	~Prism();
};
