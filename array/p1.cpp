#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> g;
int n;
cin>>n;
for(int i=0; i<n;i++)
{
	int element;
cin>>element;
g.push_back(element);

}
for(auto i=g.begin();i!=g.end();i++)
{
	cout<<*i<<" ";
}
cout<<endl;
for(int i=g.size()-1;i>=0;i--)
{
	cout<<g[i]<<" ";
}
g.insert(g.begin()+2,88);
g.pop_back();
g.erase(g.begin()+3);
cout<<endl;
for(auto i=0;i<=g.size();i++)
{
	cout<<g[i]<<" ";
}
return 0;
}