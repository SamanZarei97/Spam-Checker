#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "pa1.h"
#include "pa1Strings.h"

void populateTable(linkedListNode_t** hashtbl, FILE* dataFile) {

  char buff[BUFSIZ];
  
  while(fgets(buff, BUFSIZ, dataFile)) {

    char *newLineCh = strchr(buff,'\n');

    if(newLineCh != NULL) {

      *newLineCh = '\0'; 
    
    }
    
    for(char *str = buff; str < buff + strlen(buff); str++) {

      *str = tolower(*str);
    }
    
    llTableAddString(hashtbl, buff);
  }

}	
