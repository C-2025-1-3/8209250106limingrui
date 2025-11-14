#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	char x;
	cin>>a, x, b;
	if (x == '+') 
	{ 
		c = a + b;
		cout << a << '+' << b << '=' << c << endl;
	}
	if(x=='-')
	{
		c = a - b;
		cout << a << '-' << b << '=' << c << endl; }
	if (x == '*')
	{
		c = a * b;
		cout << a << '*' << b << '=' << c << endl;
	}
	if (x == '/')
	{
		if (b == 0) { cout << "无意义" << endl; }
		else{ cout << a << '/' << b << '=' << c << endl; }
	}
	if (x == '%')
	{
		if (b == 0) { cout << "无意义" << endl; }
		else { cout << a << '%' << b << '=' << c << endl;}
	}
	else { cout << "运算符非法" << endl; }
	return 0;
}