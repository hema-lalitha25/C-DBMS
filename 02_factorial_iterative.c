/* 02_factorial_iterative.c
   Iterative factorial
*/
#include <stdio.h>
long long factorial(int n){
    long long res = 1;
    for(int i=2;i<=n;i++) res *= i;
    return res;
}
int main(void){
    int n = 10;
    printf("Factorial of %d is %lld\n", n, factorial(n));
    return 0;
}
