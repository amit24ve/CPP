#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=5;j++)
        {
            if(i==0&&j==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}