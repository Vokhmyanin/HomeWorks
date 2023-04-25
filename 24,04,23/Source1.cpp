#include <iostream>
#include <conio.h>
using namespace std;
//#define BOARD_1
#define BOARD_2
void main()

{
//setlocale(LC_ALL, "");
#ifdef BOARD_1
	int n;
	cout << "¬ведите размер доски: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					if (i % 2 == k % 2)cout << "* ";
					else cout << "  ";
				}
			}
			cout << endl;
		}
	}
#endif
#ifdef BOARD_2
	int n;
	cout << "¬ведите размер доски: "; cin >> n; 
	setlocale(LC_ALL, "C");
	n++;
	cout << endl;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << (char)218;
			else if (i == 0 && j == n) cout << (char)191;
			else if (i == n && j == 0) cout << (char)192;
			else if (i == n && j == n) cout << (char)217;
			else if (i == 0 || i == n) cout << (char)196<<(char)196;
			else if (j == 0 || j == n) cout << (char)179;
			else
			{
				if (i % 2 == j % 2)cout << (char)219 << (char)219;
				else cout << "  ";
			}

			
		}
		cout << endl;
	}
		
	

#endif
}