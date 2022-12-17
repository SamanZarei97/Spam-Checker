#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pa1.h"
#include "pa1Strings.h"

int main(int argc, char* argv[]) {

  if(argc == 2) {

    fprintf(stdout, LONG_USAGE);
    return EXIT_SUCCESS;
  }

  if( argc != 3){

    fprintf(stderr, INVALID_ARGS);
    fprintf(stderr, SHORT_USAGE);
    return EXIT_FAILURE;
  }

  FILE *read = fopen(argv[2], "r");
  
  if(read == NULL){

    perror(FILTER_ERR);
    fprintf(stderr, SHORT_USAGE);
    return EXIT_FAILURE;
  }

  linkedListNode_t ** hasht = newLinkedListArray(DEFAULT_SIZE);
  populateTable(hasht,read);
  launchUserQuery(hasht);
  cleanup(hasht);
  fclose(read);
}
