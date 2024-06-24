#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link; 
};
//not returning any thing since its a void function
void add_at_beg(struct node **head, int data){
    struct node *ptr;
    ptr= (struct node*) malloc (sizeof(struct node));
    ptr->data=data;
    ptr->link=NULL;

    ptr->link=*head;
    *head=ptr;
    //head of main fuction(head) will get change not 
    //head of this function(*head) becuse head of this function contain
    //address of head of the main function which through out the program 
    //remains same.
    //updating head pointer by using *head pointer
    //
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

    add_at_beg(&head,60);

    while(head!=NULL){
        printf("%d\n",head->data);
        head=head->link;
    }
    return 0;

}