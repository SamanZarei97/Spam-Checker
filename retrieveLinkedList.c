#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pa1.h"
#include "pa1Strings.h"

linkedListNode_t *retrieveLinkedList(linkedListNode_t** hashtbl, char* string){

  unsigned int hashKey = hash(string);
  unsigned int index = hashKey % DEFAULT_SIZE;
  return hashtbl[index];
}
