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

   while(fgets(line , sizeof(line)/sizeof(line[0]) , read) != NULL){

   	for(int i = 0; i < rows; i ++){
      for(int j = 0; j <= cols; j++){
      	fscanf(read , "%c" , &string[i][j]);

      	 if(string[i][0]){
          if(i < rows){
          printf("|");
        }
        }
        else if(string[i][cols]){
          if(!string[rows][cols])
          printf("|");
        }
              printf("%c" , string[i][j]);

      }
  }

   }

}


