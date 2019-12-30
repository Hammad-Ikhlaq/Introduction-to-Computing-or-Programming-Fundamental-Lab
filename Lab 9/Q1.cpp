#include<iostream>
using namespace std;
int main()
{
	int my_array[15],size=15, pos = 0, neg = 0, even = 0, odd = 0;
	cout << "Enter 15 numbers separated by enter key:" << endl;
	for (int x = 0; x < size; x++)
	{
		cin >> my_array[x];
		if (my_array[x] > 0)
			pos++;
		else if (my_array[x]<0)
			neg++;
		if (my_array[x] % 2 == 0)
			even++;
		else
			odd++;
	}
	cout << endl << "Positive Numbers: " << pos;
	cout << endl << "Negative Numbers: " << neg;
	cout << endl << "Even Numbers: " << even;
	cout << endl << "Odd Numbers: " << odd << endl << endl;
	return 0;
}