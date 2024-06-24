
//completed
//adding element at the end when array is not full

#include <stdio.h>

int add_at_end(int a[],int freepose,int data){
    a[freepose]=data; //inserting data at empty place of array  
    //at freepose i.e,65.
    freepose++;
    return freepose;
}
int main(){
int a[100];

int i,n,freepose;//free-position
printf("enter the no of element\n");
scanf("%d",&n); 
printf("enter %d element\n",n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}

freepose=n;
freepose=add_at_end(a,freepose,67);
//passing array 'a', empty index 'freepose', element.
printf("printing element\n");
for (i=0;i<freepose;i++){
    printf("%d",a[i]);
}

return 0;

}

/*
for eg if n=3; then,scanning'
a[0]=2
a[1]=3
a[2]=4 then next box will be empty
a[3]=empty , cuz array is of size 100
freeose=3, that means at index 3,array is empty. 
a[3] box is empty so is set as freepose.

in at end function,
in array a at position of freepose,which is empty position
a[freepose],a[3]=data,67
and freepose is increased,=4
now array contain the elements 2,3,4,67,....,empty till a[99].
now freepose=4 since its increased. and returned to the main function.

*/