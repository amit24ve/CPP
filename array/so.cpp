#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={5,6,5,5,6,6,7,6,7};
    int c=sizeof(a)/sizeof(0);
    sort(a,a+c);
    for(int i=0;i<c;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}