/*
���� ������ ����� ����������� ����� ����������� �����, ����� �
���� ���� ����� ��������, � ����� � ����� ����������. �� ������ ���������
����� m, n , k , l . ǒ�������, �� � ���� (m, n) �� (k, l ) ������ ������ �������.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int m, n, k, l;

	cout << "Input a placing of a chess cell (col number, row number): " << endl;
	cin >> m >> n;
	cout << "Input a placing of another chess cell (col number, row number): " << endl;
	cin >> k >> l;
	cout << endl;

	if ((n % 2 + m % 2) % 2 == (l % 2 + k % 2) % 2)
		cout << "These cells have the same colour." << endl;
	else
		cout << "These cells have different colours." << endl;

	_getch();
	return 0;
}