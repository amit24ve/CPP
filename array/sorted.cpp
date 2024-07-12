#include<iostream>
#include<algorithm>
using namespace std;
int fun(int a[],int c,int x)
{
    // sort(a,a+c,greater<int>());
    // for(int i=0;i<c;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    int low=0,high=c-1;
    int mid=(low+high)/2;
    while (low<=high)
    {
        if(a[mid]==x)
        {
            return mid;
        }
        else if(a[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int a[]={1,4,2,4,6,8};
    int d=sizeof(a)/sizeof(0);
    int x=4;
    cout<<fun(a,d,x);
    return 0;
}