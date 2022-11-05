#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c,max;
    printf("enter value a");
    scanf("%d",&a);
    printf("enter value of b");
    scanf("%d",&b);
    printf("enter value of c");
    scanf("%d",&c);
    if(a>b) {
       if (a>c)
        max=a;
        else 
        max=c;
        }else{
            if(b>c)
            max=b;
            else
            max=c;
        }
        printf("max number is %d",max);

        getch();
    


}