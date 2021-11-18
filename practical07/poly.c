#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//create a function to compute factorial part of each term	
int factorial(int n){
	int i;
	int fact=1;
	
	//speical case: 0!=1
	if (n==0)
		return 1;
	
	//use for loop to iterate the  nth factorial
	//e.g 3!=2!*3
	for (i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;

}

double compute_poly(int n, int x){

	double sum=0.0;
	int i;
	
	//use for loop to iterate the sum by adding each succesive term onto our variable 'sum'
	//use formula in sheet in conjunction with defined factorial function
	for (i=0;i<=n;i++){
		sum=sum+(double)pow(x,i)/factorial(i);
	}

	return sum;
}

int main(){
	
	//need array_of_terms to pass by reference (pointer)
	int order_of_poly;
	int size_of_array;
	double* array_of_terms;
	int i;
	int x=1;
	
	//user needs to enter order of polynomial
	printf("Enter the order of polynomial: ");
	scanf("%d", &order_of_poly);
	
	//need array to be one unit longer that poly order to store all the results
	size_of_array=order_of_poly+1;

	//define dynamic array with malloc
	array_of_terms=(double *) malloc(size_of_array*sizeof(double));
	
	//calculate approximation for each polynomial from 0 up to the selected order
	//e.g calculate approximation for 0,1,...20 and store each approximation in the array
	for (i=0;i<size_of_array;i++){
	array_of_terms[i]=compute_poly(i,x);
	printf("f[%d]=%0.20f\n",i,array_of_terms[i]);
	}
	
	//compare with true value
	printf("e1=%0.20f\n",exp(1));
	
	//calculate error for each approximation
	for (i=0;i<size_of_array;i++){
	printf("Estimate difference for term %d is %0.20f\n",i,exp(1)-array_of_terms[i]);
	}
	
	//release and free the memory
	free(array_of_terms);
	array_of_terms=NULL;


	return 0;
}

//approximation gets worse when order>13. Might be down to floating point arithmetic where we are rounding up to nearest float thereby going above the actual true value of e.
