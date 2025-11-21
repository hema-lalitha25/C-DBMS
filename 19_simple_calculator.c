/* 19_simple_calculator.c
   Basic calculator (add,sub,mul,div) using simple menu sample
*/
#include <stdio.h>
int main(void){
    double a=12.5, b=3.5;
    printf("Add: %.2f\nSub: %.2f\nMul: %.2f\nDiv: %.2f\n", a+b, a-b, a*b, a/b);
    return 0;
}
