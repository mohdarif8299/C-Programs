#include<stdio.h>
int main() {
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	int i;
	printf("Before combining");
	for(i=0;i<10;i++) {
		printf("%d\t",a[i]);
	}
	long int oneNumber= 0L;
	for(i=0;i<10;i++)
		oneNumber=oneNumber*10l+a[i];
		printf("%ld",oneNumber);
	return 0;
}
