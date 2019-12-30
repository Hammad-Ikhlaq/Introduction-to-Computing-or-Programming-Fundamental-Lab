# include<iostream>
using namespace std;
int main()
{
	int number[5] = { 0 }, array2[5] = { 0 };
	cout << "Enter the number\n";
	for (int i = 0; i <= 4; i++)
	{
		cin >> number[i];
	}
	
		for (int i = 0; i <= 4; i++)
	{
			array2[i] = number[i];
	}
	for (int i = 0; i <= 4; i++)
	{
		array2[i] = (array2[i] * array2[i]);
	}
	cout << "Array1		Array2\n";
	for (int i = 0; i <= 4; i++)
		cout << number[i] << "		" << array2[i] << endl;
	system("pause");
	return 0;
}