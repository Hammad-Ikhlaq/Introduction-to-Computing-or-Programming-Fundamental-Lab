#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
	const int MAXSIZE = 50;
    char str[MAXSIZE] = {0};
	cout<<"Enter sentence\n";
	cin>>str;
	cout<<str<<endl;
	cout<<"It shows that cin only include sentence without spaces\n";
	for(int i=0;i<=49;i++)
	cout << (int) str[i]<<endl;
	cout<<"So it shows that including (int) before the array element will convert them into ascii\n";
	//cin.getline(str,MAXSIZE);
	//cout<<str<<endl;
	system("pause");
	return 0;
}