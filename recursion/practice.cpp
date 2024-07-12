// #include<iostream>
// using namespace std;
// int fun(int a)
// {
//     if(a==0)
//     {
//         return 0;
//     }
//     // cout<<a<<" ";  
//     // fun(a-1);
//     // cout<<a<<" ";  
//     // fun(a/2);
//     // cout<<a%2<<"";
//     else{
//     return a+fun(a-1);
//     }
// }
// int main()
// {
//    int a=5;
//    cout<<fun(a);
//    return 0; 
// }


// #include<iostream>
// using namespace std;
// int fun(int n, char A, char B, char C)
// {
//     if(n==1)
//     {
//         cout<<"move 1 from "<< A <<" to "<< C <<endl;
//         return 0;
//     }
//     fun(n-1,A,C,B);
//     cout<<"move"<<n<<" from "<< A <<" to "<< C <<endl;
//     fun(n-1,B,A,C);
// }
// int main()
// {
//    int n=2;
//    fun(n,'A','B','C');
//    return 0; 
// }




// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool fun(string a,string b)
// {
//     int n=a.length();
//     int n1=b.length();
//     if(n!=n1)
//     {
//         return false;
//     }
//     sort(a.begin(),a.end());
//     sort(b.begin(),b.end());
//     for(int i=0;i<n1;i++)
//     {
//         if(a[i]!=b[i])
//         {
//             return false;
//         }
//     }
//     return true;
    
// }
// int main()
// {
//    string a="amit";
//    string b="miat";
//    int c=fun(a,b);
//    if(c==0)
//    {
//     cout<<"No";
//    }
//    else{
//     cout<<"Yes";
//    }
//    return 0; 
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void fun(string a, int i=0)
// {
//     if(i==a.length()-1)
//     {
//         cout<<a<<" ";
//         return;
//     }
//     for(int j=i;j<a.length();j++)
//     {
//         swap(a[i],a[j]);
//         fun(a,i+1);
//         swap(a[j],a[i]);
//     }
// }
// int main()
// {
//    string a="ABC";
//    fun(a);
//    return 0; 
// }

// #include<iostream>
// using namespace std;
// int fun(int a[],int n,int r)
// {
//     if(n==0)
//     {
//         return (r==0)?1:0;

//     }
//     return fun(a,n-1,r)+fun(a,n-1,r-a[n-1]);
// }
// int main()
// {
//     int a[]={10,5,2,3,6};
//     int n=sizeof(a)/sizeof(0);
//     int r=8;
//     cout<<fun(a,n,r);
//     return 0;
// }

#include<iostream>
using namespace std;
int fun(int a[],int n,int r)
{
    
    int left=0;
    int right=n-1;
    int mid=(right-left)/2;
    while (left<=right)
    {
        if(a[mid]==r) 
        {
            return mid;
        }    
        else if(a[mid]>r)
        {
            right = mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return -1;
    
}
int main()
{
    int a[]={10,5,2,3,6};
    int n=sizeof(a)/sizeof(0);
    int r=5;
    cout<<fun(a,n,r);
    return 0;
}

// #include<iostream>
// using namespace std;
// int fun(string s,int i=0)
// {
//     if(s.length()==i)
//     {
//         cout<<s<<" ";
//     }
//     for(int j=i;j<s.length();j++)
//     {
//         swap(s[i],s[j]);
//         fun(s,i+1);
//         swap(s[j],s[i]);
//     }

// }
// int main()
// {
//     string a="ABC";
//     fun(a);
//     return 0;
// }

