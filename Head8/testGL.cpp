#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double fxn;
	double del;
	cin >> x;
	do {
	fxn = (x + 2) / (x + 1) - (x + 1) * (x + 1) * (x + 1) / (x + 2);
	cout << fxn << " ";
	cout << -0.9031 - fxn << " ";
	cout << 0.92 - x << " ";
	cout << fxn * (0.92 - x) / (-0.9031 - fxn) << " ";
	cout << x - fxn * (0.92 - x) / (-0.9031 - fxn) << " ";
	del = abs(fxn * (0.92 - x) / (-0.9031 - fxn));
	x = x - fxn * (0.92 - x) / (-0.9031 - fxn);
	cout << endl;
	}
	while (del >= 0.0001);
	system("pause");
}