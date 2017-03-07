//-----------------------------------------
// NAME: Jaehun Lee
// STUDENT NUMBER: 7689407
// COURSE: COMP 2160, SECTION: A01
// INSTRUCTOR: Franklin Bristow
// ASSIGNMENT: assignment 2, QUESTION: question 1
// 
// REMARKS: illumination read a text file and print illumination around character.

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


 
int main(void) {

 FILE *read;//
   //char ch;
 char line[100];

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
printf("move %d:\n", move );

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
      	fscanf(read , "%c" , &string[i][j]);// fscanf read to address of string array

      	 if(string[i][0]){
          if(i < rows){
          printf("|");
        }
        }
        else if(string[i][cols]){
          if(!string[rows][cols])
          printf("|");
        }

         if(string[i][j] == champ)// if string have @ symbol change to % instead
          string[i][j] = otherchamp;

          printf("%c" , string[i][j]);

          string[i][j] = '\0';

      }
  }

   }printf("\n");

}//end 


