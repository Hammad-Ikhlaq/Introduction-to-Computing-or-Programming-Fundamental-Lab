# include <iostream>
using namespace std;

	void SelectionSort_ASCENDING(int numbers[],int size)
{
	int min;
 for(int i=0;i<size;i++)
   {
      min=i;
	  for(int j=i+1;j<size;j++)
	   {
	     if(numbers[min]>numbers[j])
			 min=j;
	   } 
 swap(numbers[i],numbers[min]);
 }
}
	
int main()
{
const int size=10;
int output[size]={0};
int l = 1;
int j = 0;
	
	int numbers[size]={0};
	cout <<"enter positive and negetive numbers in array\n";
	for(int i=0;i<size;i++)
	{
		cin>>numbers[i];
	}
	SelectionSort_ASCENDING(numbers, size);
	int p=0,q=size-1;
	for(int i=0;i<size;i++)
	{
	if(i%2==0)
	{
	output[i]=numbers[p];
	p++;
	}
	if(i%2!=0)
	{
	output[i]=numbers[q];
	q--;
	}
	}
	cout<<"the ouput is ";
		for(int i=0;i<size;i++)
	{
		cout<<output[i]<<endl;
	}

system("pause");
return 0;
}