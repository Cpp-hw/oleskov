/*
���� ������ ����� ����������� ����� ����������� �����, ����� �
���� ���� ����� ��������, � ����� � ����� ����������. ����� m, n , k , l
��������� �� ������. ǒ�������, �� ������� �����, �� ����� �� ��� (m, n)
����� �� ��� (k, l ).
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int m, n, k, l;

	cout << "Input a placing of a Queen (col number, row number): " << endl;
	cin >> m >> n;
	cout << "Input a placing of another chessman (col number, row number): " << endl;
	cin >> k >> l;
	cout << endl;

	if (m == k || n == l || abs(m - k) == abs(n - l))
		cout << "The Queen can beat this chessman." << endl;
	else
		cout << "The Queen cann't beat this chessman." << endl;
	
	_getch();
	return 0;
}