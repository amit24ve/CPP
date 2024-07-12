#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a={2,4,3,5,6,7};
    // for(int i=0;i<5;i++)
    // {
    //     int l;
    //     cin>>l;                  // user input value
    //     a.push_back(l);
    // }
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" "; 
    }
    cout<<endl;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==5)
        {
            a.erase(a.begin()+a[i-1]);
        }

    }
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
    cout<<a.size();
    return 0;
}
