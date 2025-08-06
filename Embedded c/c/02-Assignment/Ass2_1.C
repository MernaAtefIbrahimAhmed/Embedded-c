#include <stdio.h>

int main(){
int n1,n2,n3;
printf("Enter three numbers:");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3){
	printf("The greatest number:%d",n1);
	}
	else if(n2>n3){
	printf("The greatest number:%d",n2);
	}
	else if(n3>n1){
	printf("The greatest number:%d",n3);
	}
	else {
	printf("Equal numbers!");
}}