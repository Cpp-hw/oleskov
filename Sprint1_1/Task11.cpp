/*
Роздрукувати в порядку спадання всі дільники введеного з консолі
натурального числа.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    unsigned int number, divider;

    cout << "Enter a number (it should be positive): ";
    cin >> number;

    cout << "The dividers of the number:" << endl;
    for (int i = number; i > 0; i--)
    {
        if (number % i == 0)
            cout << i << "\t";
    }

	_getch();
    return 0;
}