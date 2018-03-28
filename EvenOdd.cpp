#include<stdio.h>
int main() {
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	if((num&1)==0)
	printf("Even");
	else 
	printf("Odd");
	return 0;
}
