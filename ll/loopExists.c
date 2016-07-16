/*
∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑∑
Author: Mayukh Sarkar
Email: mayukh2012@hotmail.com
Country: India
License: GPL public
Copyright ® © 
¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 5

typedef struct _Node {
  int data;
  struct _Node* next;
}Node;

Node* create(Node* head, int* data){
  int i;
  Node* curr;
  for(i = 0; i < SIZE; i++){
    if (head == NULL){
      // This is the first Node
      head = (Node*)malloc(sizeof(Node));
      head->data = data[i];
      head->next = NULL;
      curr = head;
    }else{
      // This is not the first node
      curr->next = (Node*)malloc(sizeof(Node));
      curr = curr->next;
      curr->data = data[i];
      curr->next = NULL;
    }
  }
return head;
}

void print(Node* head){
  Node* loop = head;
  while(loop){
    printf("%d ", loop->data);
    loop = loop->next;
  }
  printf("\n");
}

Node* create_looped(Node* head, int* data, int loopbackIndex){
  int i;
  Node* curr;
  Node* loopbackNode;
  if (loopbackIndex < 0 && loopbackIndex >= SIZE - 1)
    return NULL;
  for (i = 0; i < SIZE; i++){
   if (head == NULL){
     // first node
     head = (Node*)malloc(sizeof(Node));
     head->data = data[i];
     head->next = NULL;
     curr = head;
   }else{
     // not the first node
     curr->next = (Node*)malloc(sizeof(Node));
     curr = curr->next;
     curr->data = data[i];
     curr->next = NULL;
   }
   if (i == loopbackIndex)
     loopbackNode = curr;
  }
  

  curr->next = loopbackNode;
  return head;
}

void print_looped(Node* head){
 Node* p = head;
 Node* q = head->next;
 while(p != q){
   printf("%d ", p->data);
   p = p->next;
   q = q->next->next;
 }
 printf("%d ", p->data);
 printf("%d\n", p->next->data);
 printf("Loopback at %d\n", q->next->next->data);
}

bool hasLoop(Node* head){
  Node* p = NULL;
  Node* q = NULL;
  if (head != NULL)
    p = head;
  if (head->next != NULL)
    q = head->next;
  if (!p || !q)
    return false;

  while(1){
    if (q == NULL)
      return false;
    if (p == q)
      break;
    p = p->next;
    q = q->next->next;
  }
  /** printf("Loopback at Node %d\n", q->next->next->data); */
  return true;
}



int main() {
  Node* head1 = NULL;
  Node* head2 = NULL;
  int data[] = {1, 2, 3, 4, 5};
  head1 = create(head1, data); 
  /** print(head1);     */
  printf("%d\n", hasLoop(head1));
  head2 = create_looped(head2, data, 1);
  /** print_looped(head2); */
  printf("%d\n", hasLoop(head2));

return 0;
}
