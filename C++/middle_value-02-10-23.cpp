#include <iostream>
using namespace std;

float num1, num2;
float  middle_value;

int main()
{
	cout<<"Введите числа: "<<endl;
	cin>>num1>>num2;
	middle_value=(num1+num2)/2;
	cout<<"Среднее арифмитическое "<<num1<<" и "<<num2<<" = "<<middle_value;

	return 0;
}