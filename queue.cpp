#include<stdio.h>
#define SIZE 10
void enQueue(int);
void deQueue();
void display();
int queue[SIZE], front = -1, rear = -1;

int main()
{
   int value, choice;
   do{
   		printf("Enter your choice:\n");
      printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit\n");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert:");
		     scanf("%d",&value);
		     enQueue(value);
		break;
	 case 2: deQueue();
		     break;
	 case 3: display();
		 break;
	 default: printf("Select Correct Option\n");
      }
   }
   while(choice!=4);
   return 0;
}
void enQueue(int value){
   if(rear == SIZE-1)
      printf("Queue is Overflow\n");
   else{
      if(front == -1)
	 front = 0;
      rear++;
      queue[rear] = value;
   }
}
void deQueue(){
   if(front == rear)
      printf("Queue is Empty\n");
   else{
      printf("Deleted %d\n",queue[front]);
      front++;
      if(front == rear)
	 front = rear = -1;
   }
}
void display(){
   if(rear == -1)
      printf("Queue is Empty\n");
   else{
      int i;
      printf("Queue elements are:\n");
      for(i=front; i<=rear; i++)
	 printf("%d\t\n",queue[i]);
   }
}
