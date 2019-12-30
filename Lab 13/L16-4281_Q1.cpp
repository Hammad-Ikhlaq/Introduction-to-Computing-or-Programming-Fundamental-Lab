#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int a[10][10];int b[10][10];int c[10][10];
void main()
{
	int i, j, k, l;
	system("cls");


	cout << "Enter the value of the matrix a: " << endl;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "\n Enter the value of the matrix b: " << endl;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			cin >> b[i][j];
		}
	}


	cout << "\nThe Resulting Matrix Should Be: " << endl;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			c[i][j] = 0;
			for (k = 0; k <= 2; k++)
			{
				c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
			}
		}
	}
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}
}