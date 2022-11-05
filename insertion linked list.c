#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
   
};
void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf(" element=%d\n",ptr->data);
         ptr = ptr->next;
    }
}
struct node * insertAtFirst(struct node *head, int data){
   struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = head;
    return ptr; 
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    head-> data = 7;
    head-> next = second;
    second-> data = 28;
    second-> next = third;
    third-> data = 65;
    third-> next = third;
    fourth-> data = 88;
    fourth-> next = NULL;

    linkedlisttraversal(head);
    head = insertAtFirst(head,56);
    linkedlisttraversal(head);

     return 0;
}
