#include <stdio.h>
int main(){
	int n1,n2,choice;
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	printf("Enter the operation example 1 represents addition, 2 represents subtraction, 3 represents multiplication and 4 represents division:");
	scanf("%d",&choice);
	
	switch(choice){
		case 1: printf("Result=%d",n1+n2); break;
		case 2: printf("Result=%d",n1-n2); break;
		case 3: printf("Result=%d",n1*n2); break;
		case 4: printf("Result=%d",n1/n2); break;
		
	}
}