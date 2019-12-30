#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter num=";
	cin>>num;
	int i=2,s=0;
	while(i<num)
	{
		if(num%i==0)
		{
			s++;
		}
		i++;
	}
	if(s>0)
		cout<<"NOT Prime";
	else
		cout<<"Prime Number";
	system("pause");
	return 0;
}

