#include<iostream>
using namespace std;

struct mystack
{
    int *arr;
    int cap;
    int top=-1;
    mystack (int c)
    {
        cap=c;
        arr=new int[cap];
    }
    int push(int x)
    {
        top++;
        arr[top]=x;
    }
    int pop()
    {
        int res=arr[top];
        top--;
        return res;
    }
    int peek()
    {
        return arr[top];
    }
    bool isEmpty()
    {
        return (top==-1);
    }
};

int main()
{
    mystack s(4);
    s.push(10);
    s.push(33);
    s.push(23);
    s.push(97);
    for(int i=0;i<=s.top;i++)
    {
        cout<<s.arr[i]<<" ";
    }
    cout<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.pop()<<endl;
    return 0;
}