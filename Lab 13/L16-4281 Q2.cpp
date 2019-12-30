#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;     
void sort(char arr[5][10])//2d char array sort karna
{
	int j=0,ind;
	int max,maxi;

	for(int i=0;i<5;i++)
	{
			max=strlen(arr[i]); 
		for(j=0;j<i;j++)
		{
		    if(max<strlen(arr[j])) // yahan par '>' laga dou tau descending... 
	     	{
			max=strlen(arr[j]);
			maxi=j;
			swap(arr[maxi],arr[i]);
		    }
		}
	}
	cout<<"sorted one:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}

}
int main()
{
	char a[5][10];
	
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	sort(a);
	system("pause");
	return 0;
}