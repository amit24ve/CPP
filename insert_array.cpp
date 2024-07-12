#include<bits/stdc++.h>
using namespace std;
int insert_array(int a[],int n,int x,int pos)
{
    if(n==1)
    {
        return n;
    }
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--)
    {
        a[i+1]=a[i];
    }
    a[idx]=x;
    return (n+1);
}
int main()
{
    int n,x,pos;
    cin>>n>>x>>pos;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int p=insert_array(a,n,x,pos);
    for(int i=0;i<p;i++)
    {
      cout<<a[i]<<" ";
    }
    return 0;
}