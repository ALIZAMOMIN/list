 
 //completed
 
 #include <stdio.h>
 #include <stdlib.h>

 struct node{
    int data;
    struct node *link;
 };

 struct node *add_at_end(struct node *ptr,int data){
    
    struct node *current;
  
    current=(struct node*)malloc (sizeof(struct node));
    current->data=data;
    current->link=NULL;
    ptr->link=current;
    
    return current;
 }

 int main(){
    struct node *head;
    head=(struct node*)malloc (sizeof(struct node));
    head->data=10;
    head->link=NULL;
    struct node *ptr;
    ptr=head;
    ptr=add_at_end(ptr,20);
    ptr=add_at_end(ptr,30);
    ptr=add_at_end(ptr,40);

    ptr=head;//again settig ptr=head
    while(ptr!=NULL){
    printf("%d\n",ptr->data);
    printf("%p\n",ptr->link);
    ptr=ptr->link;
    }
    return 0;

 }

