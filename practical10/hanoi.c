#include<stdio.h>
#include<stdlib.h>

//declare function: n is number of disks while source,midd,dest are the source,intermediary and end rods respectively.
//This problem can be solved using recursion, base case for n=1 is that we just move disk 1 from source to dest.

//3 step problem
void hanoi(int n,int source, int dest, int midd){
	if(n==1){
		printf("Moved disk %d from %d to %d\n",n,source,dest);
	}
	else{	
		//step 1 is move n-1 disks from source to midd using recursion
		hanoi(n-1,source,midd,dest);

		//step2:  move largest  disk from source to dest
		printf("Moved disk %d from %d to %d\n",n,source,dest);

		//step3:  now move n-1 disks from midd to dest using recursion
		hanoi(n-1,midd,dest,source);
	}
}

void main(){

	int h;
	printf("Enter number of disks: \n");
	scanf("%d",&h);
	printf("Tower of Hanoi solution for %d disks\n",h);
	hanoi(h,1,3,2);
	
}
