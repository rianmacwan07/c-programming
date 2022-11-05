#include<stdio.h>
#include<conio.h>
void main()
 {
 int a[6]={1,2,3,4,5};
 int no,i,loc;
 
 printf("Elements of array A before insertion : \n");
 for(i=0;i<5;i++)
 {
 printf("%d\n",a[i]);
}
printf("Enter the element to be inserted into array A : ");
scanf("%d",&no);
printf("Enter the position of the element :");
scanf("%d",&loc);
for(i=4;i>=loc-1;i--)
{
a[i+1]=a[i];
}
a[loc-1]=no;
printf("Elements of array A after insertion : \n");
for(i=0;i<=5;i++)
{
printf("%d\n",a[i]);
}
getch();
}  