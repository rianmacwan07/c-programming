#include<stdio.h>
void main(){
    int a[5]={2,5,6,2,6};
    int *p[5],i;
    for(i=0;i<5;i++)
    {
        p[i]=&a[i];
        printf("elements of array are");
    }
    for(i=0;i<5;i++)
    {
        printf("%d",*p[i]);
    }
    getch();
}