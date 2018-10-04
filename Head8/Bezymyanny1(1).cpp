#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int s=0;
int i=0;
int rd(int a)
{
	a=abs(a);
	i++;
	if(a==0) return 0;
	rd(a/10); 
	return s+pow(a%10,i);
	i--;
}

int main()
{
	string s;
	cin >> s;
	if (s[0] == '-') 
		rd(s)
	else
		rd()
	else cout<<rd(n);
	system("pause");
}
