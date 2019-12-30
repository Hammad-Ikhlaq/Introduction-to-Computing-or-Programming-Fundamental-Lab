#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int stringlength(char input[])
{
	int i=0;
	for(;input[i]!='\0';i++)
	{
	}
	return i;
}
int main()
{
	char array[100];
	cout<<"Enter sentence\n";
	gets(array);
	int words=stringlength(array);
	cout<<"Number of words="<<words<<endl;;
	system("pause");
	return 0;
}