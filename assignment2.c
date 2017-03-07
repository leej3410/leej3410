#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


 
int main(void) {

 FILE *read;//, *write;
   //char ch;
 char line[100];// need to give a right size

 read = fopen("infile.txt", "r");

   if(read == NULL){

    printf("FAIL");
    return 1;
   }   


}


