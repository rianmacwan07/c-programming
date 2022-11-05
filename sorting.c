#include<stdio.h>
#include<conio.h>
void main(){
    
    int arr[50],n,i,j,temp;
    printf("enter the element ");

    scanf("%d",&n);
    
    printf("enter  integers %d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

             }
        }
    }
    printf("sorted list");
    for(i=0;i<n;i++)
    printf("%d",arr[i]);

    getch();
}   