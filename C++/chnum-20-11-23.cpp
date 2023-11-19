#include <iostream>
using namespace std;

int main()
{
	int num, unit, dec, hun;

	cout<<"Введите трехзначное число: "<<endl;
	cin>>num;
	unit = num % 10;
	dec = num / 10 % 10;
	hun = num / 100 % 10;

	cout<<hun<<unit<<dec<<endl;

	return 0;
}