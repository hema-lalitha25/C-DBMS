/* 12_stack_array.c
   Stack implemented using array
*/
#include <stdio.h>
#define MAX 100
typedef struct { int a[MAX]; int top; } Stack;
void push(Stack *s, int x){ if(s->top<MAX-1) s->a[++s->top]=x; }
int pop(Stack *s){ return (s->top>=0)? s->a[s->top--] : -1; }
int main(void){
    Stack s; s.top = -1;
    push(&s,10); push(&s,20); push(&s,30);
    printf("Popped %d\n", pop(&s));
    return 0;
}
