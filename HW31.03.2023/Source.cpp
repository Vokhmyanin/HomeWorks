#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int ticket;
	cout << "������� ������������ ����� ������: " << endl;
	cin >> ticket;
	int second = ticket % 1000;    //������  3 �����
	int first = (ticket - second) / 1000; //������ 3 �����
	//cout << first << "\t"; cout << second << endl;
	int bufer1;
	int sum1 = 0;

	while (first > 0)
	{
		bufer1 = first % 10;
		first /= 10;
		sum1 += bufer1;
	}
	/*
	int bufer1 = first % 10;
	first  /= 10;
	int bufer2 = first % 10;
	first /= 10;
	int bufer3 = first;
	cout << bufer1 << endl;
	cout << bufer2 << endl;
	cout << bufer3 << endl;
	int sum1 = bufer1+bufer2+bufer3; //����� ������ ���� ����
	*/
	cout << "����� ������ ���� �����: "<<sum1 << endl;

	int bufer2;
	int sum2 = 0;
	while (second > 0)
	{
		bufer2 = second % 10;
		second /= 10;
		sum2 += bufer2;
	}
	/*
	int bufer4 = second % 10;
	second /= 10;
	int bufer5 = second % 10;
	second /= 10;
	int bufer6 = second;
	cout << bufer4 << endl;
	cout << bufer5 << endl;
	cout << bufer6 << endl;
	int sum2 = bufer4 + bufer5 + bufer6;
	*/
	cout << "����� ������ ���� �����: "<<sum2 << endl;


	if (sum1 == sum2)
	{
		cout << "�����������! ����� ����������!" << endl;
	}
	else
	{
		cout << "� ���������, ����� �� ����������((" << endl;
	}
}
	