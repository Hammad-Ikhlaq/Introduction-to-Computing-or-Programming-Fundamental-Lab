#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>
using namespace std;
void palindrome(char input[])
{
	int i = 0, j = 0;
	bool condition = true;
	j=strlen(input)-1;
	while(i<j && condition==true)
	{
		if (input[i] != input[j]&&condition==true)
		{
				cout << "5 letter character is not palindrome\n";
				condition = false;
		}
		i++;
		j--;
	}
	if (condition==true)
	{
		j = strlen(input) ;
		cout << "The entered 5 letter character is ";
		for (int i = 0; i < j; i++)
		{
			cout << input[i];
		}
		cout << endl;
	}

}
int main()
{
	int j[3] = { 0 };
	char names[3][100];
	bool flag = true;
	for(int i=0;i<3;i++)
	{
		cin>>names[0];
		j[i]=strlen(names[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		if (j[i] == 5)
		{
			palindrome(names[i]);
			flag = false;
		}
		else if (flag==true)
		{
			cout << "You did not enter any 5 letter character\n";
			flag = false;
		}
	}
	system("pause");
		return 0;
}