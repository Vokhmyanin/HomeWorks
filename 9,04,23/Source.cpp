#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int j;
	int i;
	for (i = 1; i <= 10; i++)
	{

		for (j = 1; j < 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << i * j << "\n\n";

	}

	
	

}

