#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


 
int main(void) {

 FILE *read;//, *write;
   //char ch;
 char line[100];// need to give a right size

 char string[20][20];
 char c1[10], c2[10], c3[10], c4[10], c5[10];
 int rows, cols, move;
 char champ = '@', otherchamp = '%';

 read = fopen("infile.txt", "r");

   if(read == NULL){

    printf("FAIL");
    return 1;
   }   

fscanf(read , "%s %s %s %s %s %d %d %d", c1 , c2 , c3 , c4 , c5 , &rows , &cols , &move);

   while(fgets(line , sizeof(line)/sizeof(line[0]) , read) != NULL){

   	for(int hypen = 0; hypen < rows; hypen++){
      if(hypen == 0){
        printf("+");
      }
       if(hypen <= rows){
        printf("-");
       }
     }printf("+\n");

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

         if(string[i][j] == champ)
          string[i][j] = otherchamp;

          printf("%c" , string[i][j]);

          string[i][j] = '\0';

      }
  }

   }printf("\n");

}


