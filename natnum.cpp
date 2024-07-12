#include<iostream>
using namespace std;
bool fun(string a,int b,int c)
{
    if(b==c)
    {
        return true;
    }
    
    return (a[b]==a[c])&&fun(a,b+1,c-1);
   
}
int main()
{
    string a="amma";
    int b=0,c=4;
    cout<<fun(a,b,c);
    return 0;
}