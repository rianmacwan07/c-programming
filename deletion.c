#include<stdio.h>
#include<conio.h>
void main(){
    int a[50],i,position,n;
    printf("enter size elemnets");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elemnt position want to delete");
    scanf("%d",&position);
    for(i=position-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("elemets after deletion");
    for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
    }
    getch();
}