#include <stdio.h>
#include <math.h>

//declare arctan1 function (maclaurin series)
double arctanh1(const double x, const double delta);

//decalre arctanh2 (using logs)
double arctanh2(const double x);

int main(){
	
	//let user set precision - use scanf and pass by reference
	double prec;
	printf("Enter precision for the Maclaurin series: \n");
	scanf("%lf", &prec);
	
	//let user set start and end points
	double begin,end;
	printf("Enter the start and finish points for x:\n");
	scanf("%lf,%lf",&begin,&end);
	
	//calculate number of points to evaluate function at  so as to find length for an array to store results
	double a=((fabs(begin)+fabs(end))/prec)+1.;
	int asize=a;

	double tan1[asize];
	double tan2[asize];

	double i;
	int j=0;
	
	// use loop to apply functions at each point in our interval, incrementing by our precision amount
	// use j as the index for our array
	for (i=begin; i<=end;i+=prec){

		tan1[j]=arctanh1(i,prec);
		tan2[j]=arctanh2(i);
		printf("The difference between tan1[%.3lf] and tan2[%.3lf] is %.10lf.\n",i,i,fabs(tan1[j]-tan2[j]));
		j++;
	}
	return 0;

}

double arctanh1(const double x, const double delta){

	double arcTan=0; //arcTan will keep running total of sum
	double elem; // elem is each term
	int n=0;
	do {
		double val=2*n+1;
		elem=pow(x,val)/val;
		arcTan+=elem;
		n++; //increment by 1 to get next term in series

	} while(fabs(elem)>= delta); //terminate loop when the next term becomes smaller than the precision
	return arcTan;
}

//formula as defined on exercise sheet
double arctanh2(const double x){
	return(log(1+x)-log(1-x))/2;
}
