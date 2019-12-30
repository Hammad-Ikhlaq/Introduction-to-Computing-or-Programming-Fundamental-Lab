# include<iostream>
using namespace std;
int main()
{
	float height, weight, BMI;
	cout << "Enter your height in meters\n";
	cin >> height;
	cout << "Enter your weight in kilograms\n";
	cin >> weight;
	while (height < 0)
	{
		cout"Enter a positive value\n";
		cin >> height;
	}
	while (weight < 0)
	{
		cout"Enter a positive value\n";
		cin >> weight;
	}
	BMI = (weight / (height*height));
	cout << "Your BMI is " << BMI;
	if (BMI < 18.5)
		cout << "Underweight\n";
	if (BMI >= 18.5&&BMI<=24.9)
		cout << "Normal\n";
	if (BMI >= 25&&BMI <= 29.9)
		cout << "Overweight\n";
	if (BMI >= 25 && BMI <= 29.9)
		cout << "Obese\n";
	system("pause");
	return 0;
}