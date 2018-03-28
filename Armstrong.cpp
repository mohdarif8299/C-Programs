#include<stdio.h>
#include<math.h>
void arms(int digit,int i);
int main() {
	int num,i=0,digit,sum=0,num1;
	printf("Enter a number\n");
	scanf("%d",&num);
	int number = num;
	int original = num;
	while(num>0) {
		digit = num%10;
		num = num/10;
		i++;
	}
	while(number>0) {
		num1 = number%10;
		sum = sum+pow(num1,i);
		number = number/10;
	}
	if(sum==original) 
		printf("Armstrong number\n");
		else 
		printf("Non-Armstrong\n");
	return 0;
}
