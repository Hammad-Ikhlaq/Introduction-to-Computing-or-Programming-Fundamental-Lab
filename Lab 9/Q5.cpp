#include<iostream>
using namespace std;
int main()
{
	int my_array[10];
	cout << "Enter 10 numbers separated by an enter key:" << endl << endl;
	for (int x = 0; x < 10; x++)
		cin >> my_array[x];
	cout << endl << "The address of these numbers are: " << endl;
	for (int x = 0; x < 10; x++)
		cout << &my_array[x] << endl;
	cout << endl << "The pattern of these addresses is formed by adding \'4\' in the previous address";
	cout << endl << endl;
	system("pause");
	return 0;
}