/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int giaithua(int n){
	int gt=1;
	if(n==0) return 1;
	else{
	for(int i=1;i<=n;i++){
		gt=gt*i;
	}
	return gt; 
}
}

int tohop(int n,int i){
	int a =giaithua(n);
	int b =giaithua(i);
	int c =giaithua(n-i);
	int d = a /(b*c);
	return d; 
}

void Ex1(int n){
	//Your codes here
	int pascal;
	for(int i=0; i<=n; i++){
		for(int j=0;j<=i;j++){
			pascal = tohop(i,j);
			printf("%d ",pascal);
		}
		printf("\n");
	}

    
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}
