#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pa1.h"
#include "pa1Strings.h"

void prependNode(linkedListNode_t** head, char* str) {


   linkedListNode_t *temp = newLinkedListNode();
   char *cpString = strcp(str);
   temp -> value = cpString;
   temp -> next = *head;
   *head = temp;
}	
