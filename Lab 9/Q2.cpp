#include<iostream>
using namespace std;
int main()
{
	int my_array[20], size = 20;
	cout << "Enter 20 numbers separated by enter key:" << endl;
	for (int x = 0; x < size; x++)
		cin >> my_array[x];
	int x = 0;
	for (int y = size - 1; y >= size / 2; y--)
	{
		swap(my_array[x], my_array[y]);
		x++;
	}
	cout << endl << "Your numbers in reverse order are:" << endl;
	for (int x = 0; x < size; x++)
		cout << my_array[x] << " ";
	cout << endl << endl;
	return 0;
}