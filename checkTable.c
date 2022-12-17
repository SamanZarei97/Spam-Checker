#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pa1.h"
#include "pa1Strings.h"

int checkTable(char* str, linkedListNode_t** hashtbl) {

  linkedListNode_t *temp = retrieveLinkedList(hashtbl, str);
   
  while(temp != NULL) {

    if(strcmp(str, temp -> value) == 0) {

      return 1;
    }

    temp = temp -> next;

  }

  return 0;  

}
