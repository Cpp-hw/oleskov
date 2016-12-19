
#include "Shape_2D.h"
class Square :
	public Shape_2D
{
private:
	float edge;

	bool Input_Validation(float edge);
public:
	Square();
	Square(float e1);
	void SetEdge(float edge);
	float GetEdge();
	virtual void InputShapeEdges();
	virtual double Area();
	virtual void ShowData();
	~Square();
};
