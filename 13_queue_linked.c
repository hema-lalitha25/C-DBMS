/* 13_queue_linked.c
   Queue using linked list (enqueue, dequeue)
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{ int data; struct Node* next; } Node;
typedef struct { Node *front,*rear; } Queue;
void enqueue(Queue *q,int x){
    Node* n = malloc(sizeof(Node)); n->data=x; n->next=NULL;
    if(!q->rear) q->front=q->rear=n;
    else{ q->rear->next=n; q->rear=n; }
}
int dequeue(Queue *q){
    if(!q->front) return -1;
    Node* t=q->front; int val=t->data; q->front=q->front->next;
    if(!q->front) q->rear=NULL; free(t); return val;
}
int main(void){
    Queue q = {0};
    enqueue(&q,5); enqueue(&q,10);
    printf("Dequeued %d\n", dequeue(&q));
    return 0;
}
