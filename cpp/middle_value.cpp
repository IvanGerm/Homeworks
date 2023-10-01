#include <iostream>
using namespace std;

int num1, num2, middle_value;

int main()
{
	cout<<"Введите числа: "<<endl;
	cin>>num1>>num2;
	middle_value=(num1+num2)/2;
	cout<<"Среднее арифмитическое "<<num1<<" и "<<num2<<" = "<<middle_value;

	return 0;
}