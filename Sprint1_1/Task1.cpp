/*
Поміняти місцями значення цілих змінних a та b, не використовуючи при цьому додаткову буферну змінну.
*/

#include <iostream>
#include <algorithm>  

using namespace std;

int main()
{
	int a, b;
	cout << "Input two numbers." << endl;
	cout << "-the first number: ";
	cin >> a;
	cout << "-the second number: ";
	cin >> b;
	swap(a, b);

	cout << "\nThe numbers are swapped." << "\n-the first is: " << a << "\n-the second is: " << b << endl;
	system("pause");

	return 0;
}