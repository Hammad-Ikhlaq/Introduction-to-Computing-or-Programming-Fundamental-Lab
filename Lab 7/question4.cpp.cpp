#include<iostream>
using namespace std;
int main()
{
	int start,end,mid,answer;
	cout<<"enter the starting positive number";
	cin>>start;
	cout<<"enter the ending positive number";
	cin>>end;
	
	if(start==end)
	{	cout<<"your answer is"<<start;
	}
	else
	{
		if(start>end)
		{
		swap(start,end);
		}
		while(start<end)
		{
			mid=(start+end)/2;
			cout<<"is the number greater than"<<mid<<"press 1"<<"if not than 0";
			cin>>answer;
			if(answer==1)
			{
				start=mid+1;
			}
			else
				end=mid;
		}
		cout<<"is the number="<<start;
	cin>>answer;
	if(answer==1)
	{
		cout<<"your number is="<<start; 
	}
	else
		cout<<"your number is="<<end;
	}
	
	system("pause");
	return 0;
}


