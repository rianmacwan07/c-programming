#include<stdio.h>
#include<conio.h>
void main(){
    int a[50],i,size,search;
    printf("enter size element");
    scanf("%d",&size);
    printf("enter the elments");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element you want to search");
    scanf("%d",&search);
    for(i=0;i<size;i++)
    {
    if (search==a[i])
    {
        printf("element found");
        break;
    
    }
    else
    {
        printf("element not found");
        break;
    }
    }
    getch();
}