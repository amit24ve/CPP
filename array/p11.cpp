#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a{112,32,53,74,85};
	for(int i=0;i<a.size();i++)
{
	cout<<a[i]<<" ";
}
cout<<endl;
cout<<a.size()<<endl;
cout<<a.capacity()<<endl;
a.erase(a.begin()+2);
for(int i=0;i<a.size();i++)
{
	cout<<a[i]<<" ";
}
cout<<endl;
cout<<a.size()<<endl;

return 0;
}