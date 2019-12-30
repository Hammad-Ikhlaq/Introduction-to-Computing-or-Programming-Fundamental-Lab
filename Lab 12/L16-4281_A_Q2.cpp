#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
int charCount(char sentence[], int letter)
{
	int i=0,frequency=0;
	while(sentence[i]!='\0')
	{
		if(letter==sentence[i])
			frequency++;
		i++;
	}
	return frequency;
}
int main()
{
	const int MAXSIZE = 50;
	int answer=0;
	char str[MAXSIZE] = {0},character;
	cout<<"Enter sentence\n";
	cin.getline(str,MAXSIZE);
	cout<<"Enter the letter\n";
	cin>>character;
	answer=charCount(str,character);
	cout<<character<<" occures "<<answer<<" times";
	system("pause");
	return 0;
}