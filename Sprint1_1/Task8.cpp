/*
Дано цілі додатні числа i та k . Реалізувати функцію, що обчислює
значення виразу...
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
	unsigned int i, k;
	int z;
	cout << "Input two numbers:" << endl;
	cout << "- number \"i\": ";
	cin >> i;
	cout << "- number \"k\": ";
	cin >> k;

	system("CLS");
	if (i > k && i % k == 0)
	{
		z = i - k;
		cout << "i % k == 0 \nThus, z = i - k.\n" << "z = " << i << " - " << k << " = " << z << endl;
	}
	else if (k > i && k % i == 0)
	{
		z = k - i;
		cout << "k % i == 0 \nThus, z = k - i.\n" << "z = " << k << " - " << i << " = " << z << endl;
	}
	else
	{
		z = i + k;
		cout << "k % i != 0 && i % k != 0 \nThus z = i + k.\n" << "z = " << i << " + " << k << " = " << z << endl;
	}

	_getch();
	return 0;
}