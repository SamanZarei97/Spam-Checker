#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "test.h"
#include "pa1.h"
#include "pa1Strings.h"



void populateTable_no_emails() {

  linkedListNode_t **hasht = newLinkedListArray(5);
  FILE *f = fopen("none.txt","r");
  populateTable(hasht,f);
  int checker = 0;

  // it shows if our file is empty or not 
  for(int i = 0; i <5; i++){
   
    if(hasht[i] == NULL) {

     checker = 1;
    }

  }

  TEST(checker == 1);

  fclose(f);
}



void populateTable_few_emails() {

  linkedListNode_t **hasht = newLinkedListArray(DEFAULT_SIZE);
  FILE *f = fopen("few.txt","r");
  populateTable(hasht, f);
   
  int checkName1 = checkTable("saman@you.me", hasht);
  int checkName2 = checkTable("keyvan@you.me", hasht);
  int checkName3 = checkTable("amos@you.me", hasht);
  int checkName4 = checkTable("barbod@you.me", hasht);
  int checkName5 = checkTable("bita@you.me", hasht);
  int checkName6 = checkTable("hooman@you.me", hasht);
  TEST( checkName1 == 1);
  TEST( checkName2 == 1);
  TEST( checkName3 == 1);
  TEST( checkName4 == 1);
  TEST( checkName5 == 1);
  TEST( checkName6 == 0);
  
  fclose(f);
}

void populateTable_many_emails() {

 linkedListNode_t **hasht = newLinkedListArray(DEFAULT_SIZE);
 FILE *f = fopen("long.txt","r");
 populateTable(hasht,f);

 int ch1 = checkTable("bita@you.me", hasht);
 int ch2 = checkTable("jalal@you.me", hasht);
 int ch3 = checkTable("roxana@you.me", hasht);
 int ch4 = checkTable("javid@you.me", hasht);
 int ch5 = checkTable("shayan@you.me", hasht);
 int ch6 = checkTable("kaveh@you.me", hasht);
 int ch7 = checkTable("amth@you.me", hasht);
 int ch8 = checkTable("ashkan@you.me", hasht);
 int ch9 = checkTable("saman@you.me", hasht);
 int ch10 = checkTable("amos@you.me", hasht);
 int ch11 = checkTable("keyvan@you.me", hasht);
 int ch12 = checkTable("hooman@you.me", hasht);
 int ch13 = checkTable("barbod@you.me", hasht);
 
 TEST( ch1 == 1);
 TEST( ch2 == 1);
 TEST( ch3 == 1);
 TEST( ch4 == 1);
 TEST( ch5 == 1);
 TEST( ch6 == 1);
 TEST( ch7 == 0);
 TEST( ch8 == 0);
 TEST( ch9 == 1);
 TEST( ch10 == 1);
 TEST( ch11 == 1);
 TEST( ch12 == 1);
 TEST( ch13 == 1);
 fclose(f);

}


int main() {

  fprintf(stderr, "Testing hash ...\n\n");
  
  populateTable_no_emails(); 
  populateTable_few_emails();
  populateTable_many_emails();
  fprintf(stderr, "\nDone running test.\n");
  return 0;
}
