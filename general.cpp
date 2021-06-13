// Find quotient and remainder
#include <iostream>

using namespace std;

remainder(int dividend, int divisor)
{
	cout << "Division remainder is:\n" << int(dividend%divisor) << endl;
}

Quotient(int dividend, int divisor)
{
	cout << "Division quotient is:\n" << int(dividend/divisor);
}

int main()
{
	int dividend, divisor;
	cout << "Please enter dividend number" << endl;
	cin >> dividend;
	cout << "Please enter divisor number" << endl;
	cin >> divisor;
	remainder(dividend, divisor);
	Quotient(dividend, divisor);
}
