#include<stdio.h>
int searchID(char given_id[3]) {
	FILE *fp;
	fp = fopen("member.dat","r"); 
	char line[200];
	int flag = 0;
        while(fgets(line,200,fp)!=NULL)
        {
        	if(strstr(line,given_id)) {
                flag = 1;
                break;
            }
                else {
                flag= 0;
		   }
		}	
		if(flag==1) {
			return 1;
		}
		else  {
			return 0;
		}
	}
int main() {
	char given_id[3];
	int flag = 0;
	printf("Enter the ID to search\n");
	scanf("%s",given_id);
	int found = searchID(given_id);
	printf("%d",found);
}
