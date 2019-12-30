# include<iostream>
using namespace std;
int main()
{
	int input;
	int i = 1;
	int sum=0;
	cout << "Enter an integer greater than 1\n";
	cin >> input;
	while (i <= input-1)
	{
		cout << (i*i) << "+";
		sum = sum + (i*i);
		i++;
	}
	cout << (i*i) << "=" << sum << endl;
	system("pause");
	return 0;
}