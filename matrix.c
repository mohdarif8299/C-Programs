#include<stdio.h>
int main() {
    int n,i,j,k;
	printf("Enter number rows and column for a nXn matrix\n");
	scanf("%d%d",&n,&n);
	int a[n][n],b[n][n],c[n][n];
	printf("Enter elements of Matrix 1\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Elements of Matrix 2\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			c[i][j] = 0;
		}
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			for(k=0;k<n;k++) {
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("Multiplication is \n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
