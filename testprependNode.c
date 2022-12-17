#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "test.h"
#include "pa1.h"

void prependNode_one_empty_ll() {
  
  linkedListNode_t *head;
  char *a = "bita";
  
  prependNode(&head, a);

  TEST(strcmp(a, head -> value) == 0 );
  TEST (head -> next == NULL);  
 
}

void prependNode_mult_empty_ll() {

  linkedListNode_t *head = newLinkedListNode();

  char *a = "hooman";
  char *b = "kaveh";

  prependNode(&head, a);
  head -> next = NULL;
  prependNode(&head,b);
  
  linkedListNode_t *temp = head -> next; 
  TEST(strcmp(b, head -> value) == 0 );
  TEST(head -> next == temp); 
  TEST(strcmp(a, head -> next -> value) == 0);
  TEST(head -> next -> next == NULL);
 
}

void prependNode_one_short_ll() {

  linkedListNode_t *head = newLinkedListNode();
  char *a = "keyvan";
  head -> value = a;
  head -> next = NULL;
  char *b = "amos";
  
  prependNode(&head,b); 
  TEST(strcmp(b, head -> value) == 0);
  TEST(strcmp(a, head -> next -> value) == 0);
  TEST(head -> next -> next == NULL);
}

void prependNode_one_long_ll() {

  linkedListNode_t *head = newLinkedListNode();
  char *a = "shayan";
  char *b = "roxana";
  head -> value = b;
  linkedListNode_t *temp = newLinkedListNode();
  head -> next = temp;
  head -> next -> value = a;
  char *c = "shamim";
  prependNode(&head, c);
  
  TEST(strcmp(c, head -> value) == 0);
  TEST(strcmp(b, head -> next -> value) == 0);
  TEST(strcmp(a, head -> next -> next -> value) == 0);
  TEST(head -> next -> next -> next == NULL); 


}

void prependNode_mult_long_ll() {

  linkedListNode_t *head = newLinkedListNode();
  char *a = "saman";
  char *b = "yasi";
  char *c = "asghar";
  char *d = "jafar";
  head -> value = a;
  linkedListNode_t *temp = newLinkedListNode();
  head -> next = temp;
  head -> next -> value = b;
  prependNode(&head, c);
  prependNode(&head, d);
  TEST(strcmp(d, head -> value) == 0);
  TEST(strcmp(c, head -> next -> value) == 0);
  TEST(strcmp(a, head -> next -> next -> value) == 0);
  TEST(strcmp(b, head -> next -> next -> next -> value) == 0);
  TEST(head -> next -> next -> next -> next == NULL);
  
}

int main() {
 
  fprintf( stderr, "Testing hash ...\n\n" );
  prependNode_one_empty_ll(); 
  prependNode_mult_empty_ll();
  prependNode_one_short_ll(); 
  prependNode_one_long_ll(); 
  prependNode_mult_long_ll(); 
  fprintf( stderr, "\nDone running test.\n" );
  return 0;
}
