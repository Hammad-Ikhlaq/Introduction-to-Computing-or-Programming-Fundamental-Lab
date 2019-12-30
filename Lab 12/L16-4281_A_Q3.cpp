#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
int stringlength(char input[])
{
	int i=0;
	for(;input[i]!='\0';i++)
	{
	}
	return i;
}
void stringConCatenation(char array1[], char array2[], char array3[])
{
	int i=0,j=0;
	int size=0;
	size=stringlength(array1);
    while(i<=size-1)
	{
		array3[i]=array1[i];
		i++;
	}
	i++;
	size=strlen(array2);
	while(array2[j]<=size-1)
	{
		array3[i]=array2[j];
		i++;
		j++;
	}
}
int main()
{
	char full[30], first[20], last[20];
	cout<<"Enter the first array\n";
	gets(first);
	cout<<"Enter the second array\n";
	gets(last);
	stringConCatenation( first,last,full);
	cout<<last;
	system("pause");
	return 0;
}