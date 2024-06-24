//completed

/*when array is full element is added by  
by creating another array of  incresed size
and copying 1st array into 2nd*/


#include <stdio.h>

int add_at_end(int a[],int b[],int total_Elements,int freepose,int data){
   for(int i=0;i<total_Elements;i++)
    b[i]=a[i];//copying element of a into b
    b[freepose]=data; 
    freepose++;
    return freepose;
}
int main(){
int a[3];
int i,n,freepose;//free-position
printf("enter the no of element\n");
scanf("%d",&n); 
printf("enter %d element\n",n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

int total_Elements=sizeof(a)/sizeof(a[0]);
freepose=n;
if (n==total_Elements){
    //creating array b since array a is full
    int b[total_Elements+2];

    freepose=add_at_end(a,b,n,freepose,67);

    printf("printing element\n");
for (i=0;i<freepose;i++){
    printf("%d\n",b[i]);}
    }
return 0;
}
