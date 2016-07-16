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
#define SIZE 0



typedef struct _Node {
  int data;
  struct _Node* next;
}Node;

Node* create(int* elems){
  int i;
  Node* head = NULL;
  Node* curr = NULL;
  for (i = 0; i < SIZE; i++){
    if (head == NULL){
      head = (Node*)malloc(sizeof(Node));
      head->data = elems[i];
      head->next = NULL;
      curr = head;
    }else{
      curr->next = (Node*)malloc(sizeof(Node));
      curr = curr->next;
      curr->data = elems[i];
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


Node* reverse(Node* head){
  if (!head)
    return NULL;
  
  Node* c = head;
  Node* p = NULL;
  Node* n = NULL;
  while(c){
    n = c->next;
    c->next = p;
    p = c;
    c = n;
  }
  return p;
}

int main() {
  Node* head = NULL;
  int inputs[SIZE] = {};
  head = create(inputs);
  print(head); 
  head = reverse(head);
  print(head);

return 0;
}
