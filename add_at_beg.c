#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link; 
};

struct node *add_at_beg(struct node *head, int data){
    struct node *ptr;
    ptr= (struct node*) malloc (sizeof(struct node));
    ptr->data=data;
    ptr->link=NULL;

    ptr->link=head;//insted of null it will have address of head eg;1000 
    //so it will become head
    head=ptr;
    return head;
}

int main(){
    struct node *head;
    head= (struct node*) malloc (sizeof(struct node));
    head->data=10;
    head->link=NULL;

    struct node *current;
    current = (struct node*) malloc (sizeof(struct node));
    current->data=30;
    current->link=NULL;
    head->link=current;



    head= add_at_beg(head,60);

    while(head!=NULL){
        printf("%d\n",head->data);
        head=head->link;
    }


}