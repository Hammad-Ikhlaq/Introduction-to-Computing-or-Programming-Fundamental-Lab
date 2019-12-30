# include<iostream>
using namespace std;
int main()
{
	int number = 5, input;
	cout << "Enter all the numbers starting from 5 to 25\n";
	while (number >= 5 && number <= 25)
	{
		cin >> input;
		if (input == number)
			input = number;
		else
			cout << "Invalid..Enter again..\n";
		number++;
	}
	system("pause");
	return 0;
}