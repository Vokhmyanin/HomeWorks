#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int f = 1;
	int n;
	cout << "������� ����� ��� ���������� ����������: "; cin >> n;
	for (
			int i =1;
			i <= n ;
			i++	  			
			)
	{
		f*=i;

	}

	cout << f << endl;



}