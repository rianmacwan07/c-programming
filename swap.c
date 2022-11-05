#include <stdio.h>

int main()
{
    int a ,b ,c=0;

    printf("Enter the value of A:");
    scanf("%d",&a);
    printf("\nEnter the value of B:");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("A=%d B=%d",a,b);

}