// 2 traversing for printing each node
//comopleted
//time complexity O(n)
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};
int print_data(struct node *head);
int main(){
    struct node *head;
    head= (struct node*) malloc (sizeof(struct node*));
    head->data=10;
    head->link=NULL;

    struct node *current;
    current = (struct node*) malloc (sizeof(struct node*));
    current->data=30;
    current->link=NULL;
    head->link=current;

    print_data(head);
}

    
int print_data(struct node *head){
    if(head==NULL)
    printf("linked list is empty");
    struct node*ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
    
}