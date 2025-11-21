/* 16_sum_of_digits.c
   Sum of digits of an integer
*/
#include <stdio.h>
int main(void){
    int n = 12345, s=0;
    while(n){ s += n%10; n/=10; }
    printf("Sum of digits = %d\n", s);
    return 0;
}
