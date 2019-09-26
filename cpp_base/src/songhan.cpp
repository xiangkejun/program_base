#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    // int x=1;
    // if(x=(0||(x==0))) printf("%d\n", x); // 不会运行
    // if(x=0) printf("123 %d\n", x);  //不会运行
    // if(x=1) printf("%d\n", x);   // 1
    // if(x=-1) printf("%d\n", x);   // -1


    long b = 73;
    long *a = &b;
    printf("%x,%x",*a,a);  // 转到16进制 49,2836c5f8

    // char *sz1 = (char *)"abcde";
    // char sz2[12] = "abcde";
    // printf("%d  %d",sizeof(sz1),sizeof(sz2)); // 8 12
    // // sz1是指针=64/8=8

    // char strZ[12] = "abcdefg";
    // printf("%d  %d", strlen(strZ),sizeof(strZ)); //7  12 

    // int *a=0;
    // printf("%x",*a);   //段错误

    // cout<<sizeof(short)<<endl; //2
    // cout<<sizeof(int)<< endl;   //4
    // cout<<sizeof(float) <<endl;   //4

    // int n=1,b;
    // b=++n+n++;
    // cout<<b<<endl;  //5
    



}
