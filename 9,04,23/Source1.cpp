#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL,"")
	int fibo;
	int limit;

	cout << "������� �����, �� �������� ����������� ��� ���������:  "; cin >> limit;

	for (int i = 0; i <= limit; i++)
	{
		fibo += i + 1;
		cout << fibo << "\t";

	}

}