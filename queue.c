#include<stdio.h>
#define size 5
void Enqueue();
void Dequeue();
void Status();
short q[size],item,save,rtop,ftop,i;
int main()
{
	short option;
	ftop=-1;
	rtop=-1;
	do 
	{
		printf("Select an option\n");
		printf("1-Enqueue\n");
		printf("2-Dequeue\n");
		printf("3-Status\n");
		scanf("%d",&option);
		switch(option)
	{
		case 1: Enqueue();
		break;
		case 2: Dequeue();
		break;
		case 3: Status();
		break;
		default: printf("Enter correct option\n");
	}
	} while(option!=4);
	return 0;
}
 void Enqueue()
 {
 	if(rtop>=size)
 	printf("Queue is full\n");
 	else {
 		printf("Enter an item to insert\n");
 		scanf("%d",&item);
 		ftop++;
 		rtop++;
 		q[ftop]=item;
	 }
 }
 void Dequeue()
 {
 	if(ftop==rtop&ftop<=size)
 	printf("Queue is Empty");
 	else {
 		save=q[ftop];
 		ftop++;
	 }
 }
 void Status()
 {
 	if(ftop==rtop)
 	printf("Queue is empty\n");
 	else {
 		for(i=ftop;i<=rtop;i++)
 		{
 			printf("%d\n",q[i]);
		 }
	 }
 }
