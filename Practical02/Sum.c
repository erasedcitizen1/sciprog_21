#include <stdio.h>

/* This is the source code in C to sum the series as asked in Q2 in Practical 2 (it is assumed the user has already logged onto the sciprog server and the user has accessed this file via the sciprog server). This code needs to be compiled into an executable which then needs to be run.
 To compile this code for C, type the following command into the shell:
 
 gcc -o file_name_for_executable Sum.c -lm
 
 An executable file is produced in the same directory. The program can now be run by using the command in the shell
 
 ./file_name_for_executable
 
 The output should appear in the shell window. */


int main(void) {
/* Declare variables */
   int i;
   float sum1, sum2, diff;
   

/* First sum */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
      sum1=sum1+1.0/i;
   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
      sum2+=1.0/i;
   }

   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Find the difference */
   diff = sum2-sum1;

   printf(" Difference between the two is %f\n",diff);

}
