#include<stdio.h>

int main(){
    int a,b,sum,sub,mul,div;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter value of b");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("addition a and b is %d\n",sum);
    printf("subtraction of a and b is %d\n",sub);
    printf("multiplication of and b is %d\n",mul);
    printf("division of a and b is %d\n",div);
    return 0;
}


