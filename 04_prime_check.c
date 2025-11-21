/* 04_prime_check.c
   Check if a number is prime
*/
#include <stdio.h>
#include <math.h>
int is_prime(int n){
    if(n<=1) return 0;
    if(n<=3) return 1;
    if(n%2==0) return 0;
    for(int i=3;i<= (int)sqrt(n); i+=2)
        if(n%i==0) return 0;
    return 1;
}
int main(void){
    int x = 97;
    printf("%d is %s\n", x, is_prime(x) ? "prime" : "not prime");
    return 0;
}
