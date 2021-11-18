#include<stdio.h>
#include<stdlib.h>

//function needs to point to an array of integers
int* allocatearray(int n){

	int* array;

	//create dynamic array based on choice of n using malloc
	array=(int*) malloc(n*sizeof(int));

	printf("Array of size %d allocated.\n",n);
	return array;
}

//create void function as don't need to return anything
//need pointer to array and length of array as arguments (length of array to perform loop)
void fillwithones(int* array, int n){

	int i;
	for(i=0;i<n;i++)
		array[i]=1;

}

//feed in pointer to array and length of array as inputs
void printarray(int *array, int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d",array[i]);
		printf("\n");
}

//free memory
void freearray(int* array){

	free(array);
	printf("Array freed!\n");
}


int main(){
	int n;
	int* array_main;
	
	//user input
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	
	//allocate array
	array_main=allocatearray(n);

	//fill this array with 1's
	fillwithones(array_main,n);

	//print the contents of this array
	printarray(array_main,n);

	//release allocated memeory of this array
	freearray(array_main);
	array_main=NULL;

	return 0;

}


