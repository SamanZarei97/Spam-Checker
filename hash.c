#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pa1.h"
#include "pa1Strings.h"

unsigned int hash(char* str){

    unsigned int hashVal = HASH_START_VAL;

    int size = strlen(str);

    for(int i = 0; i < size; i = i + 2){

      hashVal = (hashVal * HASH_PRIME) + ((int)(str[i]));

    }    

    for(int j = 1; j < size; j = j + 2){

       hashVal = (hashVal * HASH_PRIME) + ((int)(str[j]));
	
    }    
	
    return hashVal;
}	
