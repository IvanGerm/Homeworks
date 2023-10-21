#include <iostream>
#include <cmath>
using namespace std;

int num1, num2, mod1, mod2, sum, sub, mul;

int main()
{
	cout<<"Введите 2 числа: "<<endl;
	cin>>num1>>num2;

	mod1 = abs(num1);
	mod2 = abs(num2);

	sum = mod1 + mod2;
	sub = mod1 - mod2;
	mul = mod1 * mod2;

	cout<<"Сумма модулей "<<num1<<" и "<<num2<<" = "<<sum<<endl;
	cout<<"Разность модулей "<<num1<<" и "<<num2<<" = "<<sub<<endl;
	cout<<"Произведение модулей "<<num1<<" и "<<num2<<" = "<<mul<<endl;

	return 0;
}