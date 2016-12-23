/*
Не використовуючи оператор «if», присвоїти змінній S значення 0,
якщо введене з консолі число x лежить зовні відрізків [2;5] та [-1;1] і 1 – в
противному випадку.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double x;
	cout << "Input number \"x\": ";
	cin >> x;

	cout << "S = " << ((x >= 2 && x <= 5) || (x >= -1 && x <= 1)) << endl;

	_getch();

	return 0;
}