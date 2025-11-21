/* 06_bubble_sort.c
   Simple bubble sort and print array
*/
#include <stdio.h>
void bubble_sort(int a[], int n){
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
            if(a[j]>a[j+1]) { int t=a[j]; a[j]=a[j+1]; a[j+1]=t; }
}
int main(void){
    int a[] = {5,2,9,1,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    bubble_sort(a,n);
    printf("Sorted: ");
    for(int i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
