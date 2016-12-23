/*
Задано натуральне число n . Обчислити значення виразу...
*/

#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

double mul(int n);

int main()
{
	int number;
	double p;
	cout << "Input any integer: ";
	cin >> number;

	if (number < 0)
		cout << "The number should be more or equal to \"0\"." << endl;
	else
	{
		p = mul(number);
		cout << p << endl;
	}
	_getch();

	return 0;
}

double mul(int n)
{
	double result = 1;

	for (int i = 1; i <= n; i++)
	{
		result *= (1 + 1 / (4 * sqrt(i)));
	}

	return result;
}