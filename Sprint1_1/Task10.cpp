/*
�� �������������� �������� �if�, �������� ����� S �������� 0,
���� ������� � ������ ����� x ������ ���� ������ [2;5] �� [-1;1] � 1 � �
���������� �������.
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