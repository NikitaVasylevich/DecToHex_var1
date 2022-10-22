#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int j = 0;
	int c=0;
	cout << "Введите десятичное число: ";	cin >> j;
	const int n = 10;
	int arr[n] = {};

	for (int i = 0; j >= 16; i++)
		{
			arr[i] = j % 16;
			j = j / 16;
			c = c++;
		}
	arr[c] = j;
		cout << "Шестнадцатеричное значение данного числа: ";
		const int m = 10; 
		int ar2[m] = {}; //Введение вспомогательного массива
		for (int i = 0; i <= c; i++)
		{
			ar2[i] = arr[c - i];
			if (ar2[i] <= 9)
			{
				cout << ar2[i];
			}
			else if (ar2[i] == 10) 
				cout << "A";
			else if (ar2[i] == 11) 
				cout << "B";
			else if (ar2[i] == 12)
				cout << "C";
			else if (ar2[i] == 13)
				cout << "D";
			else if (ar2[i] == 14)
				cout << "E";
			else if (ar2[i] == 15)
				cout << "F";
		}
			cout << endl;
}