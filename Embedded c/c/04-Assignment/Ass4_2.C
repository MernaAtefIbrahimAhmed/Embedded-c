#include <stdio.h>
int Factorial(int num){
	int fact = 1;
	for(int i=1;i<=num;i++){
		fact=fact*i;
		
	}
	return fact;
}
int main(){
	int nCr=0;
	int n;
	int r;
	printf("Enter n and r to get nCr , note: n must be bigger than r ");
	scanf("%d %d", &n,&r);
	while(1){
	if (n>r){
	nCr = Factorial(n)/(Factorial(r)*Factorial(n-r));
	printf("nPr = %d",nCr);
	break;
	}
	else 
	    printf("Math error! ,enter n and r to get nCr , note: n must be bigger than r ");
	    scanf("%d %d", &n,&r);
	}
	
}