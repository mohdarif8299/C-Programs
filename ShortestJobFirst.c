#include<stdio.h>
int main()
{
	int noProcess,i,j,temp,position;
	printf("Enter total no of Process\n");
	scanf("%d",&noProcess);
	int process[noProcess],burstTime[noProcess];
	printf("\nEnter Burst Time:\n");
    for(i=0;i<noProcess;i++)
    {
        printf("Process No %d-",i+1);
        scanf("%d",&burstTime[i]);
        process[i]=i+1;         
    }
	printf("Process\t Burst Time\n");
	for(i=0;i<noProcess;i++)
	printf("%d\t %d\n",i+1,burstTime[i]);
	 for(i=0;i<noProcess;i++)
      {
            position = i;
            for(j=i+1;j<noProcess;j++)
            {
                  if(burstTime[j] < burstTime[position])
                  {
                        position = j;
                  }
            }
            temp = burstTime[i];
            burstTime[i] = burstTime[position];
            burstTime[position] = temp;
            temp=process[i];
            process[i] = process[position];
            process[position] =temp;
      } 
	int waitingTime[10],sum=0;
	waitingTime[0] = 0;
      for(i=1;i<noProcess;i++)
      {
            waitingTime[i] = 0;
            for(j=0;j<i;j++)
            {
                  waitingTime[i] = waitingTime[i] + burstTime[j];
            } 
            sum = sum + waitingTime[i];
      }
      int turnAroundTime[20];
      float averageWaitTime = (float)sum / noProcess,averageTurnaroundTime;
      sum = 0;
      printf("\nProcess ID\t\tBurst Time\t Waiting Time\t Turnaround Time\n");
      for(i = 0; i < noProcess; i++)
      {
            turnAroundTime[i] = burstTime[i] + waitingTime[i];
            sum = sum + turnAroundTime[i];
            printf("\nProcess[%d]\t\t%d\t\t %d\t\t %d\n", process[i], burstTime[i], waitingTime[i], turnAroundTime[i]);
      }
      averageTurnaroundTime = (float)sum / noProcess;
      printf("\nAverage Waiting Time:\t%f\n", averageWaitTime);
      printf("\nAverage Turnaround Time:\t%f\n", averageTurnaroundTime);
	return 0;
}
