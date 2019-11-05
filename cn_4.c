#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int nf,N;
	int no_tr=0;
	
	srand(time(NULL));

	printf("Enter no. of frames: ");		scanf("%d",&nf);
	printf("\nEnter the Window size: ");	scanf("%d",&N);
	printf("\n\n");
	
	int i=1, j;
	while(i<=nf)
	{
    	int x=0;
    	for(j=i;j<i+N && j<=nf;j++,no_tr++)		printf("Sent frame %d ",j);
    
		for(j=i;j<i+N && j<=nf;j++)
    	{
    	    int flag = rand() % 2;
    	    
			if(!flag)
    	        {
    	            printf("Acknowledgment for Frame %d\n",j);
    	            x++;
    	        }
    	    else
    	        {   printf("Frame %d NOT Received\n", j);
    	            printf("Retransmitting Window\n");
    	            break;
    	        }
    	}
    	printf("\n");
    	i += x;
	}//while

	printf("Total number of transmissions : %d\n",no_tr);
	
	return 0;
}