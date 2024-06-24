//completed
// 1 traversing for counting each node  
//time complexity O(n)
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;//pointer to the next node is 
    //named as link that helps to connect to the next node
};

//since the head pointer is the type of struct node 
int count_of_nodes(struct node *head);
int main(){
    struct node *head;
 //opinter to the first node containing add of 1st node
    head= (struct node*) malloc (sizeof(struct node*));
//allocating memory zise of struct node* to store elements of node
    head->data=10;
    head->link=NULL;

    struct node *current;
    current = (struct node*) malloc (sizeof(struct node*));
    current->data=30;
    current->link=NULL;
    head->link=current;

    count_of_nodes(head);

}

int count_of_nodes(struct node*head){
    int count=0;

    struct node*ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->link;
    }
    printf("%d",count);
}

/*int data: Stores the data value of the node.
struct node* link: A pointer to the next node in the list.

Pointer: The pointer is used to dynamically allocate memory 
for nodes and to link nodes together to form the list. 
It allows for flexible memory usage and easy insertion/deletion of 
nodes.*/