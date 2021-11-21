#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h" //use "" to denote the file is ours and not belonging to the compiler

//getlines counts number of lines in inputted file
int getlines(char filename[MAX_FILE_NAME]);

int main(){
	
	//declare and input file using filename and scanf()
	FILE *f;
	char filename[MAX_FILE_NAME];
	printf("Enter file name: ");
	scanf("%s",filename);
	
	//open file with read only access
	f=fopen(filename,"r");

	int n= getlines(filename);

	//Allocate a matrix
	// need to dynamically allocate memory for matrix  as n is not fixed within script
	//matrix variable needs to be a pointer to a pointer as each array is a pointer
	int i;
	int ** magicSquare=malloc(n*sizeof(int*));

	for(i=0;i<n;i++){
		magicSquare[i]=malloc(n*sizeof(int));
	}
	
	//populate matrix with user input
	//need double loop: i is row, j is column
	int j;

	for(i=0;i<n;i++){
	//	printf("Enter the elements in row#%d, separated by blanks and/or linebreaks:\n",i+1);

		for(j=0;j<n;j++){
			fscanf(f,"%d",&magicSquare[i][j]);
		}

	}
	
	//run isMagicSquare function with defined matrix to check if magic or not (function in separate script)
	printf("The square %s magic.\n", isMagicSquare(magicSquare,n) ? "is" : "is NOT");
	
	//need to free memory for each row separately before freeing memory from pointers
	for(i=0;i<n;i++){
		free(magicSquare[i]);
	}
	
	//free pointers
	free(magicSquare);

	fclose(f);

	return 0;
}

int getlines(char filename[MAX_FILE_NAME]){
	
	//open file with read only access
	FILE *fp;
	fp=fopen(filename, "r");

	int ch_read; //variable to iterate through each character in file
	int count=0; //count number of lines in file

	//use while loop to get characters in each line up until End of File
	//increase count by 1 for every line break - this will count number of lines
	while((ch_read=fgetc(fp))!=EOF)
	{
		if (ch_read=='\n'){
			count++;
		}
	}
	
	//print no of lines and close file
	printf("No. of lines %d\n", count);
	fclose(fp);

	return count;
}
