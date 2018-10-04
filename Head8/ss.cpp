#include <iostream>
#include <cmath>
using namespace std;
void rd(int k)
{
int d;
if (k==0) return;
if (k > 0 || k % (-2) == 0	) rd (k/-2); else rd(k / -2 + 1);
cout << abs(k % (-2));
}
int main()
{
int a;
cin>>a;
if(a==0)cout<<0;
rd(a);
system("pause");
}