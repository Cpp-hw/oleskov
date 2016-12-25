#include <iostream>
#include <string>
#include <cstring>
#include <conio.h>

using namespace std;

string palindrom(string str);

int main()
{
	string str;
	cout << "Input your string: " << endl;
	cin >> str;

	cout << palindrom(str);

	_getch();
	return 0;
}

string palindrom(string str)
{
	int j = str.length() - 1;
	for (int i = 0; i < (str.length() / 2); i++, j--)
	{
		swap(str[i], str[j]);
	}

	return str;
}
