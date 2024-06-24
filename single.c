// 3-node
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head;
    head=(struct node* )malloc(sizeof(struct node));
    head->data=13;
    head->link=NULL;
    printf("%d\n",head->data);
    printf("%p\n",head->link);
    //creating next node 
    struct node *current; 
    current=(struct node* )malloc(sizeof(struct node));
    current->data=14;
    current->link=NULL;
    //address of current node is set as head-link
    head->link=current;
    /*link of head (mainly contain the address of next node)is set
     to the node current means it will contain the address of 
     current node )*/
    printf("%d\n",current->data);
    printf("%p\n",head->link);
    
    //adding next node 
    current=(struct node* )malloc(sizeof(struct node));
    current->data=15;
    current->link=NULL;
    current->link=current;
     printf("%d\n",current->data);
    printf("%p\n",current->link);

    
    return 0;
}

/*Creating a singly linked list in C involves defining the structure
 for the nodes

n a singly linked list, each node needs to have a pointer to the 
next node in the list to maintain the order of the elements.
 Here's why the pointer is essential:

Purpose of the Pointer
Linking Nodes: The primary purpose of the pointer in the 
Node structure is to link each node to the next node in the sequence. This creates a chain of nodes that forms the linked list.

Traversal: The pointer allows us to traverse the list. 
Starting from the head node, we can follow the pointers to visit 
each subsequent node until we reach the end of the 
list (where the pointer will be NULL).

Dynamic Memory Management: Linked lists allow dynamic memory 
allocation, meaning nodes can be added or removed without
 re-allocating the entire list. The pointers enable this flexibility
  by linking newly allocated nodes to the existing structure.*/