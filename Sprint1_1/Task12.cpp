/*
Розробити програму, що працює як найпростіший калькулятор,
який виконує арифметичні дії «+», «-», «*», «/». (Скористатися оператором
«switch».)
*/

#include <iostream>
#include <conio.h>

using namespace std;

void Show(int n1, int n2, char s)
{
	cout << "Opperation:\n" << n1 << " " << s << " " << n2;
}

int main()
{
	double number1, number2, result;
	cout << "Input the first number:\n";
	cin >> number1;
	cout << "Input the second number:\n";
	cin >> number2;


	char choice;
	cout << "Choose the operation:" << endl;
	cout << "(Press the appropriate symbol)\n";
	cout << "- \"+\"\n" << "- \"-\"\n" << "- \"*\"\n" << "- \"/\"\n";
	cin >> choice;
	
	system("CLS");
	Show(number1, number2, choice);
	switch (choice)
	{
	case '+':
		result = number1 + number2;
		cout << "\nThe answer is " << result << "\n";
		break;
	case '-':
		result = number1 - number2;
		cout << "\nThe answer is " << result << "\n";
		break;
	case '*':
		result = number1 * number2;
		cout << "\nThe answer is " << result << "\n";
		break;
	case '/':
		if (number2 != 0)
		{
			double result = number1 / number2;
			cout << "\nThe answer is " << result << "\n";
		}
		else
		{
			cout << "\nThe divisor cannot be 0!\n";
		}
		break;
	default:
		cout << "\nUnexpected operation..." << endl;
	}

	_getch();

	return 0;
}
