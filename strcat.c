#include<stdio.h>
#include<string.h>
void main(){
    char a[10],b[10];
    printf("enter first string =");
    gets(a);
    printf("enter second string =");
    gets(b);
    strcat(a,b);
    printf("after merging %s",a);
    getch();
}
