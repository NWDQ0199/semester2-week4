/*
 * Find a substring within a given string
 */

 // create a program to locate a substring "ump" within a given string "The quick brown fox jumped over the lazy dog"

 /*  Hints:
 1. include the appropriate libraries
 2. create the main function
 3. define the program data as strings
 4. using the string library documentation find the appropriate string function
 5. implement the solution and compute the answer  
 6. print the answer appropriately as pointer, character and string
 */ 

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100]="The quick brown fox jumped over the lazy dog";
    char subStr[4]="ump";

    char* loc=strstr(str,subStr);
    printf("Pointer: %p\nCharacter: %c\nString:%s\n",loc,*loc,loc);
    return 0;
}