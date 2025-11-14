#include<iostream>
using namespace std;
int main()
{
	float a,b;
	cin >> a;
	if (a > 0 and a < 1)
	{
		b = 3 - (2*a);
	}
	else if (a>=1 and a<5)
	{
		b = 2 / (4*a) + 1;
	}
	else if (a>=5 and a<10)
	{
		b = a * a;
	}
	cout << b << endl;
	return 0;
}