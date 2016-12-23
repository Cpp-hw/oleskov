/*
Серед n введених з консолі цілих чисел знайти кількість «сусідів» різних знаків.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	unsigned int n;
	cout << "How many numbers do you want to input? ";
	cin >> n;
	cout << "Input a range of numbers:\n";
	int * numbers_array = new int [n];
	for (int i = 0; i < n; i++)
	{
		cin >> numbers_array[i];
	}

	int counter = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if ((numbers_array[i] < 0) && (numbers_array[i + 1] >= 0) || (numbers_array[i] >= 0) && (numbers_array[i + 1] < 0))
		{
			counter++;
		}
	}

	cout << "There is/are " << counter << " \"neighbour(s)\" with different signs." << endl;
	_getch();
	return 0;
}