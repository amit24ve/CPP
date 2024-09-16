#include<iostream>
using namespace std;
class amit
{
    
    public:
    void fun()
    {
        cout<<"base";
    }
};
class sumit:public amit
{
    public:
    void fun1()
    {
        cout<<"child"<<" ";
    }

};
int main()
{
    sumit obj;
    obj.fun1();

    obj.fun();
    return 0;
}