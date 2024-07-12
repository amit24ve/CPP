#include<iostream>
using namespace std;
class amit
{
    public:
    int a;
    int b;
    // amit(int c,int d);
};
// amit::amit(int c,int d)
// {
//     a=c;
//     b=d;
// }
int main()
{
    amit obj;
    obj.a=5;
    obj.b=9;
    cout<<obj.a<<" "<<obj.b;
    return 0;
}