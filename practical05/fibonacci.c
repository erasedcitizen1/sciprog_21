#include <stdio.h>
#include <stdlib.h>

//declare function to calculate fibonacci sequence with pointers
// use void as non returning function
void fibo(int *a, int *b);

int main(){
	
	//let user enter number
	int n;
	printf("Enter a positive integer for n: \n");
	scanf("%d", &n);
	
	//error handling if n less than 1
	if (n<1){
		printf("Number less than 1\n");
		exit(1);
	}

	int n1=0;
	int n2=1;
	//print first term only
	printf("The Fibonacci sequence is: \n");
	printf("%d, ",n1);
	
	
	//use a loop to update the values of n1,n2 each time and print first value
	int i;
	for (i=1; i<n-1;i++){
		fibo(&n1,&n2); //update n1,n2 using formula and print first term
		printf("%d, ", n1);
	}

	fibo(&n1,&n2); //update for last temr in sequence and print last term only
	printf("%d\n", n1);
	
	return 0;

}

void fibo (int *a, int *b){
	int next;
	next=*a+*b; //next term is sum of previous 2
	*a=*b; //update a one place
	*b=next; //update b one place
}
