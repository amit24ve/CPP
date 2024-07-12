#include<iostream>
using namespace std;
int fun(int a,int b)
{
    int res=min(a,b);
    while (res>0)
    {
        if(a%res==0 && b%res==0)
        {
            break;
        }
        res--;
    }
     return res;
    
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<fun(a,b);
    return 0;
}