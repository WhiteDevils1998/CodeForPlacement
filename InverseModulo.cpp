#include<bits/stdc++.h>
using namespace std;
int d,x,y;
void inverseMod(int num,int mod)
{
	if(mod==0)
	{
		d=num;
		x=1;
		y=0;
	}
	else
	{
		inverseMod(mod,num%mod);
		int temp=x;
		x=y;
		y=temp-(num/mod)*y;
	}
}
int main(int argc, char const *argv[])
{
	int number,mod;
	cin>>number>>mod;
	//assuming number and mod are coprime
	cout<<x;
	return 0;
}