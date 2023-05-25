# Spam Checker

## Overview
 This program checks for the spam filter. We give it some emails as input and 
 it tells us if the provided email is spam or not and it depends if that email
 is in the intended file or not. If it is, it's gonna be spam otherwise it is 
 not. 
 In other words it means that we will write an program  to check if an email is in a list of spam addresses or not. In this C Program will read in email data files and populate a hash table with these email addresses, then allow for user interaction with the data. The user will enter email addresses to check if they are spam by looking into the hash table.

## Files

- launchUserQuery.c

- util.c

- pa1.h

- pa1Strings.h

- test.h

- testhash.c

- Makefile
- hash.c: This function will be used to create the hash key of a string. This function creates an integer hash key from str with the following hashing algorithm.
- prependNode.c: This function takes in a pointer to the head of a linked list and a string to insert and then pushes the element onto the front of the linked list.
- llTableAddString.c
- populateTable.c: This function populates the hash table by reading in dataFile. 
- retrieveLinkedList.c: This function will call hash() to convert to hash string. 
- checkTable.c: This function report if the string is in the table
- spamFilter.c : This is the main function and it's to parse the command line arguments and building the hashtable of data from email, and do searching.
- testprependNode.c
- testhash.c
- testpopulateTable.c

The purpose of test function are for unit llTableAddString

## How to compile test files
    make testhash
## How to run test files    
    ./filename
## How to compile program:
 To compile this program, simply navigate to the intended directory and type 
    make <filename> 
 the filename is the file that has the main class on it. In this case,
 it's gonna be like this :
 
    make spamFilter   
## How to run program   
 to run the program, after compiling, just type executable name followed by the
 command line argument.Your output depends on the number of command line 
 arguments that you insert. For this program the valid command line are 1 and 2
 example :

    ./spamFilter -h
    ./spamFilter -i ~/../public/emails/emails_10





