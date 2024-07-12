// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin>>a;
//     int res=0;
//     while (a>0)
//     {
//        int r=a%10;
//        res=res+r;
//        a/=10;
//     }
//     cout<<res;
//     return 0;
    
// }

// input a=789
// output res =987

// #include<iostream>
// using namespace std;
// int fun(int a,int b)
// {
//     int res=max(a,b);
//     while (res>0)
//     {
//       if(res%a==0 && res%b==0)
//       {
//         break;
//       }
//       res++;
//     }
//     return res;
    
// }
// int main()
// {
//     int a=4,b=6;
//     cout<<fun(a,b);
//     return 0;    
// }

//hcf && LCM


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a=2,b=3;
//     double res=pow(a,b);
//     cout<<res;
//     return 0;
    
// }

// #include<iostream>
// using namespace std;
// bool fun(int a)
// {
//     if(a==1)
//     {
//         return false;
//     }
//     for (int i = 2; i*i<=a; i++)
//     {
//         if(a%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
    
// }
// int main()
// {
//    int a=17;
//    int c=fun(a);
//    if(c==0)
//    {
//     cout<<"No"<<endl;
//    }
//    else{
//     cout<<"Yes"<<endl;
//    }
//    return 0; 
// }