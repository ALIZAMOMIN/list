//traversing array to print
//completed
#include <stdio.h>
int main(){
    int arr[]={33,44,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<=n-1;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}

//time complexity O(n)