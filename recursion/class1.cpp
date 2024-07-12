// #include<stdio.h>
// void fun(int s)
// {
//     if(s==0)
//     {
//         return ;
//     }
//     printf("%d\n",s);
//     fun(s-1);
//     printf("%d\n",s);  
// }
// int main()
// {
//     int a=5;
//     fun(a);
//     return 0;
// }

// tower of hanoi
// #include<stdio.h>
// int fun(int s,char A,char B, char C)
// {
//     if(s==1)
//     {
//         printf("move 1 from %c to %c\n",A,C);
//         return 0;
//     }
//     fun(s-1,A,C,B);
//     printf("move %d from %c to %c\n",s,A,C);
//     fun(s-1,B,A,C);
     
// }
// int main()
// {
//     int n=3;
    
//     fun(n,'A','B','C');
//     return 0;
// }




