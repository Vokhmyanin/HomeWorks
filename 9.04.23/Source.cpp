#include<iostream>
using namespace std;
#define PIFAGOR
//#define LIMIT_FIBONACCI
//#define TABL
//#define QUANTITY_FIBO
//define PRIME_NUMB
void main()
{
	setlocale(LC_ALL, "");
#ifdef PIFAGOR
	
	int n = 10;
	for (int i = 1; i <= n; i++)
	{

		for (int j = 1; j <= n; j++)
		{
			cout.width(5);
			cout << i * j ;
		}
		cout << endl;

	}
#endif
#ifdef LIMIT_FIBONACCI
	int a=0;   //������ �����
	int b = 1; //������ �����
	int f=0;   //����� ���������
	int l;
	cout << "������� ������ ���� ���������: "; cin >> l;
	cout << a << "\t" << b << "\t";
	

		for (int i = 0; i < l; i++)
		{

			f = a + b;
			a = b;
			b = f;
			if (f<l)cout << f << "\t";
		}
	

#endif
#ifdef TABL
	
	for ( int i = 1; i < 10; i++)
	{
		for (int  j = 1; j <10; j++)
		{
			if ((i * j) < 10) cout << i << " * " << j << "  = " << i * j << endl;
			else if (i < 10, j < 10)cout << i << " * " << j << " = " << i * j << endl;								}
		cout << endl;
	}
#endif
#ifdef PRIME_NUMB
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true; //�����������, ��� ����� �������, �� ��� ����� ���������
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break; // ��������� ������� �������� � ��� �����������
			}
		}
		if(simple)cout << i << "\t";
	}
	

			
#endif
#ifdef QUANTITY_FIBO
	int a = 0;   //������ �����
	int b = 1; //������ �����
	int f = 0;   //����� ���������
	int l;
	cout << "�������  ���������� ����� ���� ���������: "; cin >> l;
	cout << a << "\t" << b << "\t";
	for (int i = 2; i < l; i++)
	{
		f = a + b;
		a = b;
		b = f;
		cout << f << "\t";
	}
#endif



}
