#include <stdio.h>
#include <math.h>

/* This is the source code to convert a decimal number to binary number in C (it is assumed the user has already logged onto the sciprog server and the user has accessed this file via the sciprog server). This code needs to be compiled into an executable which then needs to be run.
 To compile this code for C, type the following command into the shell:
 
 gcc -o file_name_for_executable Conversion.c -lm
 
 An executable file is produced in the same directory. The program can now be run by using the command in the shell
 
 ./file_name_for_executable
 
 The output should appear in the shell window. */
 


int main(void) {

/* Declare variables */
   int i,inum,tmp,numdigits;
   float fnum;
   char binnum[60];

/* Intialise 4-byte integer */
   inum = 33554431;
/* Convert to 4-byte float */
   fnum = (float) inum;


/* Convert to binary number (string)*/
   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
   }

/* Terminate the string */
   binnum[i] = '\0';
       

/* Complete the expression */
 numdigits = ceil(logf(fnum)/logf(2));
   printf("The number of digits is %d\n",numdigits);


   printf("inum=%d,  fnum=%f, inum in binary=%s\n",
      inum,fnum,binnum);

}
