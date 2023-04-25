#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int a;
	int n;
	int b=1;
	cout << "¬ведите основание степени: ";  cin >> a ;
	cout << "¬ведите показатель степени:"; cin >> n;
	for (int i = 1; 	
		i <= n; 	         	
		i++)
	{
		b *= a;
	}

	cout << b << endl;

}