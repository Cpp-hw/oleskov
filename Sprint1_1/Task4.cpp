/*
Ввести з консолі послідовність символів, що закінчується «@».
Роздрукувати тільки ті із них, що не є латинською літерою «A» (без врахування регістру).
*/

#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
	char symbol = ' ';
	cout << "Input some any number of symbols (to end press \"@\" and \"enter\"):\n";
	while (symbol != '@')
	{
		cin >> symbol;
		if (symbol != 'A' && symbol != 'a')
			cout << symbol;
	}
	
	_getch();

	return 0;
}