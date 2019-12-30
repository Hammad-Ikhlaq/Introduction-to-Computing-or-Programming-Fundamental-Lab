#include <iostream>
using namespace std;
int main()
{
int s,n,x,r;
cout<<"Armstrong's Numbers Are..."<<endl;
for(n=0;n<=1000;n++)
{
	s=0,x=n;
	while(x!=0)
	{
		r=x%10;
		s=s+r*r*r;
		x=x/10;
    }
	if(s==n)
    {
		cout<<n<<endl;
    }
}
system("pause");
return 0;
}