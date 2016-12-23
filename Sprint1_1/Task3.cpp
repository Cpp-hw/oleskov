/*
Задано натуральне число n . Обчислити...
*/

#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

double sum(int n);

int main()
{
	int number;
	cout << "Input any integer: ";
	cin >> number;

	if (number < 0)
		cout << "The number should be more or equal to \"0\"." << endl;
	else
		cout << "Sum: " << sum(number) << endl;

	_getch();

	return 0;
}

double sum(int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0)
			sum += pow(i / 3, 2);
		else
			sum += pow(i / (i - 3), 2);
	}

	return sum;
}