#include<stdio.h>
int main()
{
    short  prime,i,temp,c=0;
	printf("Enter a number\n");
	scanf("%d",&prime);
	printf("%d\n",sizeof(prime));
	printf("%d",prime);
	/*for(i=2;i<=prime/2;i++)
	{
		temp=prime%i;
		if(temp==0)
		{
			c=2;
			break;
		}
	}
	if(c==0)
	{
		printf("It is prime %d",prime);
	}
	else 
	  printf("Not prime %d",prime); */
	return 0;
}
