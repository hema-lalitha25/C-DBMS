/* 14_tower_of_hanoi.c
   Recursive Tower of Hanoi (prints moves for n=3)
*/
#include <stdio.h>
void move(int n, char from, char to, char aux){
    if(n==1){ printf("Move disk 1 from %c to %c\n", from, to); return; }
    move(n-1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    move(n-1, aux, to, from);
}
int main(void){
    move(3,'A','C','B');
    return 0;
}
