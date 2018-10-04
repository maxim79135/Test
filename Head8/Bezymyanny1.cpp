#include <iostream>
#include <stdbool.h>
#include <cmath>
using namespace std;
bool rd(int k)
{
    bool b=true;
    if(k==1) return false;
	int i;
	for(i=2;i<=sqrt(k);i++)
	{
		if(k%i==0) {
		return false;
		break;
	    }
    }
}
bool rd1(int c)
{
	if(rd(c)==false) return false;
	while(c>0 && rd(c)==true)
	{
		c=c/10;
		return true;
		if(rd(c)==false) return false;
	 } 
}
int main()
{
	int a;
	cin>>a;
	if(rd1(a)==1) cout<<"YES";
	else cout<<"NO";
	system("pause");
}


