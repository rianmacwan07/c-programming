#include<Stdio.h>
int stack[100];
int n ,top=-1,choice,x,i;
void push(void);
void pop();
void display();
int main()
{
 
 printf("enter the size of stack:");
 scanf("%d",&n);
 printf("stack operation using array");
 printf("push (1),pop(2),display(3),exit(4)");
printf("enter the choice of operation");
scanf("%d",&choice);
}
if(choice==1)
{
void push()
{

    if(top>=n-1)
    {
        printf("stack is overflowed");
    }
    else 
    {
        printf("enter valu eyou want to push");
        scanf("%d",x);
        top++;
        stack[top]=x;

    }
}


else if(choice==2):
{
void pop(){

    if(top<=-1)
    {
        printf("stack is empty");

        }
    else
    {
        printf("the poppped elemnt is %d",stack[top]);
        top--;
        }
}
}
else if(choice==3):
{
    void display()

{
  if (top>=0)
  {
    printf("element in stack is ");
    for(i=top;i>=0;i--)
    printf("%d",stack[i]);
    printf("press next choice");
  }
  else
  {
    printf("stack is empty");
  }
}
}
}

