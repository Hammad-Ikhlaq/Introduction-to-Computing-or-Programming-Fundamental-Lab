#include<iostream>
using namespace std;
int main()
{
	int my_array[10], size = 10, sumEven = 0, sumOdd = 0;
	cout << "Enter 10 numbers separated by enter key:" << endl;
	for (int x = 0; x < 10; x++)
		cin >> my_array[x];
	for (int x = 0; x < size; x = x + 2)
		sumEven = sumEven + my_array[x];
	for (int x = 1; x < size; x = x + 2)
		sumOdd = sumOdd + my_array[x];
	cout << endl << "Sum of values stored on even indexes is: " << sumEven;
	cout << endl << "Sum of values stored on odd indexes is: " << sumOdd;
	cout << endl << endl;
	return 0;
}