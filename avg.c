#include <stdio.h>

int main()
{
    int m1,m2,m3;

    printf("Enter your marks of 3 subjects");
    scanf("%d %d %d",&m1,&m2,&m3);

    int avg = (m1+m2+m3)/3;

    printf("The average of your marks is: %d",avg);

    return 0;
}