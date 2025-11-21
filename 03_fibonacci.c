/* 03_fibonacci.c
   Print first N Fibonacci numbers (iterative)
*/
#include <stdio.h>
int main(void){
    int n = 12;
    long long a=0,b=1;
    printf("Fibonacci series (%d terms): ", n);
    for(int i=0;i<n;i++){
        printf("%lld ", a);
        long long t=a+b; a=b; b=t;
    }
    printf("\n");
    return 0;
}
