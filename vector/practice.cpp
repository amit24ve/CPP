#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> a={2,3,4,5,7};
    a.erase(a.begin()+2);
    a.insert(a.begin()+1,55);
    sort(a.begin(),a.end(),greater<int>());
    a.push_back(88);
    a.push_back(99);
    a.push_back(66);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    a.pop_back();
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}