#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

float num1, int_num1, result1, num2, result2, num3, result3;




cout << "FIRST TASK\n";

	cout << "Input float number with 3 numbers after point: \n";
	cin >> num1;

	int_num1 = (int)num1;
	result1 = num1 - int_num1;

	cout << "Result: " << result1 << endl;




cout << "SECOND TASK\n";

	cout << "Input float number: \n";
	cin >> num2;
	
	result2 = pow((num2 + 1), 2) + 3 * (num2 + 1);

	cout << "Result: ";
	cout << fixed << setprecision(3) << result2 << endl;




cout << "THIRD TASK\n";

	cout << "Input float number: \n";
	cin >> num3;
	
	result3 = 6 * pow(num3, 2) + 3 * (pow((pow(num3, 3) + 1), 2));

	cout << "Result: ";
	cout << fixed << setprecision(5) << result3 << endl;



return 0;
}
