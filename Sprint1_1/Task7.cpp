/*
У введеній з консолі послідовності символів (що закінчується «$»)
підрахувати загальну кількість цифр і латинських букв.
*/

#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
	int digits = 0, letters = 0;
	char symbol = ' ';
	cout << "Input some any number of symbols (to end press \"$\" and \"enter\"):\n";
	while (symbol != '$')
	{
		cin >> symbol;
		if (isdigit(symbol))
			digits++;
		else if (isalpha(symbol))
			letters++;
	}

	cout << "There is/are " << digits << " number(s) and " << letters << " letter(s).\n";

	_getch();

	return 0;
}