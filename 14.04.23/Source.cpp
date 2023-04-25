#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "1) " << endl;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			cout << "*";
		}
	cout << endl;
	}
	cout << "2)" << endl;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			if (i >= j) cout << "*";
		}
		cout << endl;
	}
	cout << "3)" << endl;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			if (i <= j) cout << "*";
		}
		cout << endl;
	}
	cout << "4)" << endl;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			if (i <= j) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	cout << "5)" << endl;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			if ((5 - i) >= j) cout << " ";
			else cout << "*";
		}
		cout << endl;
	}
	cout << "6)" << endl;
	for (int i = 1; i<=10 ; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if ((i + j) == 6)  cout << " /";
			else cout << " ";
			if ((i + 5) == j) cout << "\\";   
			else cout << "";
			if (i == (j + 5)) cout << "\\";
			if ((i + j) == 16) cout << "/";
		}
		
		cout << endl;
	}
	cout << "7)"<<endl;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			if ((i + j) % 2 == 0) cout << "+ ";
			else if ((i + j) % 2 != 0) cout << "- ";
		}
		cout << endl;
	}
}
