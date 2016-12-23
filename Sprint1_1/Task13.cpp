/*
Обчислити значення функції...
*/

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>  
#include <conio.h>
using namespace std;

int main()
{
	double x = 0;
	while (x >= -0.4 && x <= 1.3)
	{
		cout << "x = " << x << endl;
		if (x <= 0.5)
			cout << "sin(M_PI / 2) = " << sin(M_PI / 2) << endl;
		else
			cout << "sin((x - 1) * M_PI / 2) = " << sin((x - 1) * M_PI / 2) << endl;
		x += 0.1;
	}

	_getch();
	return 0;
}