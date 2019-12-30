#include<iostream>
using namespace std;
bool searchbackwards(int val[], int index)
{
	int key = val[index];
	for (int i = index - 1; i >= 0; i--)
	{
		if (key == val[i])
			return true;
	}
	return false;
}
void input(int Array[], int range) 
{
	for(int i=0;i<range-1;i++)
		cin>>Array[i];
}
void deldulplicate(int Array1[],int range)
{
	for (int i = 0; i < range-1; i++)
	{
		bool found;
		found = searchbackwards(Array1, i);
		if (found == false)
			cout << Array1[i]  << endl;
	}
}
int main()
{
	int A[10]={0},size=10;
	cout<<"Enter the array\n";
	input(A, size);
	cout<<"Required array is\n";
	deldulplicate(A, size);
	system("pause");
	return 0;
}