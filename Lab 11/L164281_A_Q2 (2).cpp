#include<iostream>
using namespace std;
void input1(int Array[], int range) 
{
	for(int i=0;i<range-1;i++)
		cin>>Array[i];
}
void input2(int Array[], int range) 
{
	for(int i=0;i<range-1;i++)
		cin>>Array[i];
}
void checking(int Array1[],int range,int Array2[])
{
	for(int i=0;i<=range-1;i++)
	{
			if(Array1[i]==Array2[i])
			{
			   cout<<i<<endl;
			}
	}
}
int main()
{
	int A[10]={0},B[10],size=10;
	cout<<"Enter the first array\n";
	input1(A, size);
	cout<<"Enter the second array\n";
	input2(B, size);
    cout<<"Required indexes is\n";
	checking(A,size,B);
	system("pause");
	return 0;
}