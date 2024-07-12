#include<bits/stdc++.h>
using namespace std;
     
int main()
{
        int n;
        cin>>n;
        int a[n];
        vector<int> count(n+1,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            count[a[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
            cout<<endl;
            cout<<count[a[i]]<<" ";
        }
     sort(count.begin(),count.end());
      int max = count[n];
//    cout<<max<<endl;
//    cout<<count[n]<<endl;
//    cout<<n-max<<endl;
   return 0;
}