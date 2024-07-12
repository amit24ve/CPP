// #include<iostream>
// #include<vector>
// using namespace std;
// int fun(const vector<int>&a,int n)
// {
//     for(int i=0;i<=a.size();i++)
//     {
//         if(a[i]==n)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> a={2,6,8,5,9,3};
//     int n=5;
//     cout<<fun(a,n);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     vector<int>r={3,5,6,1,2,9};
    // sort(r.begin(),r.end(),greater<int>());
    // for(int i:r)
    // {
    //     cout<<i<<" ";
    // }  
    // for(int i=0;i<r.size();i++)
    // {
    //     cout<<r[i]<<" ";
    // }
    // r.erase(r.begin()+2);
    // r.insert(r.begin()+1,50);
    // cout<<endl;
    // for(int i=0;i<r.size();i++)
    // {
    //     cout<<r[i]<<" ";
    // }
// }


#include<iostream>
using namespace std;
int fun(int a[],int n, int pos,int x)
{
    if(n==0)
    {
        return 0;
    }
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--)
    {
        a[i+1]=a[i];
    }
    a[idx]=x;
    // n++;
    for(int i=0;i<n+1;i++)
    {
        cout<<a[i]<<" ";
    }

}
int main()
{
    int a[]={4,3,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    int pos=3;
    int x=34;
    fun(a,n,pos,x);
    return 0;
}