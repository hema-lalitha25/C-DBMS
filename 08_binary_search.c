/* 08_binary_search.c
   Binary search on sorted array (iterative)
*/
#include <stdio.h>
int binary_search(int a[], int n, int key){
    int l=0,r=n-1;
    while(l<=r){
        int m = l + (r-l)/2;
        if(a[m]==key) return m;
        else if(a[m]<key) l=m+1;
        else r=m-1;
    }
    return -1;
}
int main(void){
    int a[] = {1,3,5,7,9,11};
    int n = sizeof(a)/sizeof(a[0]);
    int key = 7;
    printf("Index of %d is %d\n", key, binary_search(a,n,key));
    return 0;
}
