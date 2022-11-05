#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf(" element=%d\n",ptr->data);
         ptr = ptr->next;
    }
}
struct Node *deleteatindex(struct Node * head,int index){
   
    struct Node *p = head;
    struct Node *q = head->next;
    for(int i=0;i<index-1;i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
     
 int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    head-> data = 7;
    head-> next = second;
    second-> data = 2;
    second-> next = third;
    third-> data = 6;
    third-> next = third;
    fourth-> data = 8;
    fourth-> next = NULL;

linkedlisttraversal(head);

head = deleteatindex(head,2);

linkedlisttraversal(head);

return 0;
}
