/*
Задано натуральне число N . Знайти суму його цифр.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	unsigned int number, digit;
	int sum = 0, amount = 0;

	cout << "Enter a number (it should be positive): ";
	cin >> number;

	while (number != 0)
	{
		digit = number % 10;
		cout << "Digit: " << digit << endl;
		sum += number % 10;
		amount += 1;
		number /= 10;
	}
	cout << "The sum of the digits is " << sum << "." << endl;
	cout << "The amount of the digits is " << amount << "." << endl;

	_getch();

	return 0;
}



