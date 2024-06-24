
//completed
//time complexity O(n)
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};
int add_at_end(struct node *head,  int data){
    struct node *temp;
    struct node *ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;

     while(head!=NULL){
        printf("%d\n",head->data);
        head=head->link;
    }
}
int main(){
    struct node *head;
    head= (struct node*) malloc (sizeof(struct node));
    head->data=10;
    head->link=NULL;
/*Memory Allocation:

When allocating memory for a struct node,
 use sizeof(struct node) instead of sizeof(struct node*).
sizeof(struct node*) returns the size of a pointer, 
not the size of the structure.*/
    struct node *current;
    current = (struct node*) malloc (sizeof(struct node));
    current->data=30;
    current->link=NULL;
    head->link=current;

    int data=50;
    add_at_end(head,data);
    return 0;

}