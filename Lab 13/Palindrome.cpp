# include <iostream>
# include <string.h>
using namespace std;
void palindrome(int start,int end,char a[]);
int main()
{
	char a[100];
	int start=0,end=0;
	cout<<"ENTER A STRING \n";
	cin.get(a,100);
	cout<<"THE PALINDROME WORDS IN STRING ARE:\n";
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			end=i-1;
			palindrome(start,end,a);
			start=end+2;
		}

		// to check the last word of string as there will be no space at the end of string //
		if(a[i+1]=='\0')
		{
			if(end==0)
			{
				start=end; // to check the string with one word only //
			}
			else
			{
			start=end+2;
			}
			palindrome(start,i,a);
		}
	}

	system("pause");
	return 0;
}

void palindrome(int start,int end,char a[])
{
	
	char temp[100]; // to store a copy of a word which we about invert //
	int difference,flag=0,k=0;
	if(end-start==4) // only those words will be checked that has 5 words. end-start=4 means that word has 5 words//
	{
	// making a copy of word //
	strcpy(a,temp);
	// inverting the word//
	for(int i=start;k<=(end-start)/2;i++)
	{
		difference=end-i;
		swap(a[i],a[end-k]);
		k++;
	}
	// comparing the inverted word with the orignal(copy that we made)//
	for(int i=start;i<=end && flag==0;i++)
	{
		if(a[i]!=temp[i])
		{
			flag=1; // logic: if any character of inverted word doesn't match with the original the flag becomes 1 that means word is only palindrome if flag is not 1 i.e fla=0)
		}
	}
	if(flag==0) 
	{
		for(int i=start;i<=end;i++)
		{
			cout<<temp[i]; // printing the word if it is palindrome//
		}
		cout<<endl;
	}
	}
}