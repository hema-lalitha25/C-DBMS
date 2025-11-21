/* 11_linked_list_simple.c
   Single linked list: insert at head, print
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{ int data; struct Node* next; } Node;
Node* push(Node* head, int val){
    Node* n = malloc(sizeof(Node)); n->data=val; n->next=head; return n;
}
void printList(Node* head){
    while(head){ printf("%d -> ", head->data); head=head->next; }
    printf("NULL\n");
}
int main(void){
    Node* head = NULL;
    head = push(head, 10);
    head = push(head, 20);
    head = push(head, 30);
    printList(head);
    return 0;
}
