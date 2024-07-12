#include<stdio.h>
int main()
{
    char arr[]={'a','b','c','d','e'};
    int n=sizeof(arr)/sizeof(arr[0]);
    // printf("%d",n);
    // arr[0]=2;
    // arr[1]=4;
    // arr[2]=6;
    // arr[3]=7;
    // printf("%d\t",arr[0]);
    // printf("%d\t",arr[1]);
    // printf("%d\t",arr[2]);
    // printf("%d",arr[3]);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}