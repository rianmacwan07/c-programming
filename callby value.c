#include<stdio.h>
void swapx(int x,int y);
int main(){
int a=10,b=30;
swapx(a,b);
printf("a=%d b=%d\n",a,b);
return 0;
}
void swapx(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("x=%d y=%d",x,y);

}