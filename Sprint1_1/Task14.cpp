/*
Для заданого дійсного значення x визначити x , користуючись
ітераційною формулою...
*/

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>  
#include <conio.h>
using namespace std;

int main()
{
	double x, y;
	cout << "Input \"x\": ";
	cin >> x;

	y = x;
	int i = 0;
	while (true)
	{
		double temp = 0.5 * (y + x / y);
		if (y - temp <= 10e-5)
			break;
		y = temp;
		cout << "Square root of " << x << " = " << y << endl;
		i++;
	}

	_getch();
	return 0;
}