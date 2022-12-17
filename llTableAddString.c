#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pa1.h"
#include "pa1Strings.h"

void llTableAddString(linkedListNode_t** hashtbl, char* string) {

  unsigned int hashkey = hash(string);
  unsigned int index = hashkey % DEFAULT_SIZE;
  prependNode(&hashtbl[index],string);
}	
