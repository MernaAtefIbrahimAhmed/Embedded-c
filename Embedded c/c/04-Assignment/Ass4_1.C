#include <stdio.h>
int Factorial(int num){
	int fact = 1;
	for(int i=1;i<=num;i++){
		fact=fact*i;
		
	}
	return fact;
}
int main(){
	int nPr=0;
	int n;
	int r;
	printf("Enter n and r to get npr , note: n must be biger than r ");
	scanf("%d %d", &n,&r);
	while(1){
	if (n>r){
	nPr = Factorial(n)/Factorial(n-r);
	printf("nPr = %d",nPr);
	break;
	}
	else 
	    printf("Math error! ,enter n and r to get npr , note: n must be biger than r ");
	    scanf("%d %d", &n,&r);
	}
	
}