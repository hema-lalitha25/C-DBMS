/* 07_linear_search.c
   Linear search for a value
*/
#include <stdio.h>
int linear_search(int a[], int n, int key){
    for(int i=0;i<n;i++) if(a[i]==key) return i;
    return -1;
}
int main(void){
    int a[] = {3,7,4,9,2};
    int n = sizeof(a)/sizeof(a[0]);
    int key = 9;
    int idx = linear_search(a,n,key);
    printf("Key %d %s at index %d\n", key, (idx>=0?"found":"not found"), idx);
    return 0;
}
