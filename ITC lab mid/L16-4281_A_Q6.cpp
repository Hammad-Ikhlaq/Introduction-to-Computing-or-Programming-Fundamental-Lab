# include<iostream>
using namespace std;
int main()
{
	int number[5];
	for (int i=0; i <= 4;i++)
	{
		cout << "Enter the number\n";
		cin >> number[i];
	}
	cout << "Elements in reverse order\n";
	for (int i = 4; i >= 0; i--)
	{
		cout << number[i] << endl;
	}
	system("pause");
	return 0;
}