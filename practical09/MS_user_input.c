#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h" //use "" to denote the file is ours and not belonging to the compiler

int main(){
	
	//n is user input for square size
	int n;
	printf("Enter the square size:\n");
	scanf("%d",&n);

	//Allocate a matrix
	// need to dynamically allocate memory for matrix  as n is not fixed within script
	//matrix needs to be a pointer to a pointer as each array in matrix is a pointer
	int i;
	int ** magicSquare=malloc(n*sizeof(int));

	for(i=0;i<n;i++){
		magicSquare[i]=malloc(n*sizeof(int));
	}
	
	//populate matrix with user input
	//need double loop: i is row, j is column
	int j;

	for(i=0;i<n;i++){
		printf("Enter the elements in row#%d, separated by blanks and/or linebreaks:\n",i+1);

		for(j=0;j<n;j++){
			scanf("%d",&magicSquare[i][j]);
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

	return 0;
}


