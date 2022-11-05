#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    int a[5],b[5],c[5];
    printf("enter the element of first array");
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
    }
    printf("enter the element of secind array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
    c[j]=a[i];
        }
    }

    for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        c[j]=b[i];
        printf("merged array");
        for(i=0;i<10;i++)
        printf("%d",c[i]);
    }
    }
        getch();
}