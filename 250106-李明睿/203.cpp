#include<iostream>
using namespace std;
int main()
{
	double a, b, c,l;
	cin >> a >> b >> c;
	l = a + b + c;
	if (a + b <= c or a + c <= b or b + c <= a)
	{
		cout << "不能构成三角形" << endl;
	}
	else {
		if (a == b or b == c or a == c)
			cout << "是等腰三角形" << l << endl;
		else { cout << "不是等腰三角形" << l << endl; }
		return 0;
	}

}