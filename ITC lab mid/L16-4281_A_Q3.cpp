#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	cout << "Armstrong numbers from 0-999:\n\n";
	for (int d1 = 0; d1 <= 9; d1++)
	{
		for (int d2 = 0; d2 <= 9; d2++)
		{
			for (int d3 = 0; d3 <= 9; d3++)
			{
				if ((d1*d1*d1) + (d2*d2*d2) + (d3*d3*d3) == num)
					cout << num << " ";
				num++;
			}
		}

	}
	cout << endl << endl;
	system("pause");
	return 0;
}
