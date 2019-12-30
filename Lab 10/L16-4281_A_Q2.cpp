#include<iostream>
using namespace std;
void pairs(int A[],int size1,int input)
{
	for(int i=0;i<=size1;i++)
	{
		for(int j=i+1;j<=size1;j++)
		{
			if(A[i]+A[j]==input)
			{
				cout << A[i] << " and " << A[j] << endl;
			}
		}
	}
}
int main()
{
	int array1[5],i=0,N;
	cout<<"Enter the number\n";
	cin>>N;
	cout<<"Enter the array\n";
	while(i<5)
	{
	cin>>array1[i];
	i++;
    }
	pairs(array1,5,N);
	system("pause");
	return 0;
}
