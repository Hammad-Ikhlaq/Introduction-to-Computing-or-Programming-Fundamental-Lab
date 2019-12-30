#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"enter number=";
	cin>>number;
	int y=0;
	int sum=0;
	float average;
	while(number != -1)
	{
		cout<<"enter number=";
		sum=sum+number;
		cin>>number;
		y++;
	}
	average=sum/y;
	cout<<"average is="<<average;
	system("pause");
	return 0;
}
