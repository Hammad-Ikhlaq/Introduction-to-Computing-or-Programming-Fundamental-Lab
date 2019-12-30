#include<iostream>
using namespace std;
int main()
{
	int data[10], size = 10, highest=data[0], i = 0, largeindex;
	cout << "Enter 10 numbers\n";
	for (int i = 0; i < size; i++)
	{
		cin >> data[i];
	}
	for (size = 10; size>=1; size--)
	{
		largeindex = 0;
		highest = data[0];
		for (int i = 0; i < size; i++)
		{
			if (data[i] >= highest)
			{
				highest = data[i];
				largeindex = i;
			}
		}
		swap(data[largeindex], data[size - 1]);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << data[i];
	}
	system("pause");
	return 0;
}