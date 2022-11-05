#include<stdio.h>
#include<conio.h>
void main(){
    int a[5][5],b[5][5],d[5][5],i,j,r,c;
    printf("enyter the number of rows");
    scanf("%d",&r);
    printf("enter the number of column");
    scanf("%d",&c);
    printf("enter 1st elements");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter second matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("the firs matrices is ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
     printf("the second matrices is ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          d[i][j]=a[i][j]+b[i][j];
          printf("%d\t",d[i][j]);
          
        }
        printf("\n");
    }
    getch();
}