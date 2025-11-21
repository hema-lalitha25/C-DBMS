/* 05_gcd_lcm.c
   Compute GCD and LCM using Euclid's algorithm
*/
#include <stdio.h>
int gcd(int a,int b){ while(b){ int t=a%b; a=b; b=t;} return a; }
int main(void){
    int a=56,b=98;
    int g = gcd(a,b);
    long long l = (long long)a / g * b;
    printf("GCD(%d,%d)=%d, LCM=%lld\n", a, b, g, l);
    return 0;
}
