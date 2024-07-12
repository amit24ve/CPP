#include<iostream>
using namespace std;
int fun(int p)
{
	int c=p;
	int b=0;
	while(p!=0)
	{
		int r=p%10;
		b=b+r;
		p/=10;
	}
	return b;
}
int main()
{
	int a=787;
	cout<<fun(a);
	// int c=a;
	// int b=0;
	// while(a!=0)
	// {
	// 	int r=a%10;
	// 	b=b+r;
	// 	a/=10;
	// }
	// cout<<b<<endl;
	return 0;
}