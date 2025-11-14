#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double t, f;
	cin >> f;
	t = (f - 32) / 1.8;
		cout <<fixed<<setprecision(2)<< t << endl;
		return 0;
}