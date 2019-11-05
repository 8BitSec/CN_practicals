#include<stdio.h>

int main()
{
	int choice;
	int i;

	int arr[7];
    printf("\n\nEnter the message (in binary): ");
    for(i=0;i<4;i++)	scanf("%d",&arr[i]);
    
	printf("\nMessage entered is: ");
    for(i=0;i<4;i++)	printf("%d",arr[i]);
	
	int temp;
    temp=arr[2];
    arr[2]=arr[0];
    arr[4]=arr[1];
    arr[5]=temp;
    arr[6]=arr[3];

	printf("\n\nWant to calculate in odd or even parity: ");
	printf("\n1. Even Parity.");
	printf("\n2. Odd Parity.");
	printf("\nEnter your choice :");	scanf("%d",&choice);

	if(choice==1)
{

printf("\nP1 parity bit is: ");
{
if( (arr[2]==0 && arr[4]==0 && arr[6]==0) ||
	(arr[2]==0 && arr[4]==1 && arr[6]==1) ||
	(arr[2]==1 && arr[4]==1 && arr[6]==0) ||
	(arr[2]==1 && arr[4]==0 && arr[6]==1))
        { printf("0"); arr[0]=0;}
else
        { printf("1"); arr[0]=1;}
 }

printf("\nP2 parity bit is: ");
{
if((arr[2]==0 && arr[5]==0 && arr[6]==0) ||
   (arr[2]==0 && arr[5]==1 && arr[6]==1) ||
   (arr[2]==1 && arr[5]==1 && arr[6]==0) ||
   (arr[2]==1 && arr[5]==0 && arr[6]==1))
	{printf("0"); arr[1]=0;}
else
	{printf("1"); arr[1]=1;}
 }

printf("\nP3 parity bit is: ");
{
if((arr[4]==0 && arr[5]==0 && arr[6]==0) ||
   (arr[4]==0 && arr[5]==1 && arr[6]==1) ||
   (arr[4]==1 && arr[5]==1 && arr[6]==0) ||
   (arr[4]==1 && arr[5]==0 && arr[6]==1))
  { printf("0"); arr[3]=0;}
else
  { printf("1"); arr[3]=1;}
}

printf("\n\nMessage after parity bits will be: ");
for(i=0;i<7;i++)	printf("%d ",arr[i]);

}

if(choice==2)
{
  printf("\nP1 parity bit is: ");
  {
  if( (arr[2]==0 && arr[4]==0 && arr[6]==0) ||
  	(arr[2]==0 && arr[4]==1 && arr[6]==1) ||
  	(arr[2]==1 && arr[4]==1 && arr[6]==0) ||
  	(arr[2]==1 && arr[4]==0 && arr[6]==1))
          { printf("1"); arr[0]=1;}
  else
          { printf("0"); arr[0]=0;}
   }

  printf("\nP2 parity bit is: ");
  {
  if((arr[2]==0 && arr[5]==0 && arr[6]==0) ||
     (arr[2]==0 && arr[5]==1 && arr[6]==1) ||
     (arr[2]==1 && arr[5]==1 && arr[6]==0) ||
     (arr[2]==1 && arr[5]==0 && arr[6]==1))
  	{printf("1"); arr[1]=1;}
  else
  	{printf("0"); arr[1]=0;}
   }

  printf("\nP3 parity bit is: ");
  {
  if((arr[4]==0 && arr[5]==0 && arr[6]==0) ||
     (arr[4]==0 && arr[5]==1 && arr[6]==1) ||
     (arr[4]==1 && arr[5]==1 && arr[6]==0) ||
     (arr[4]==1 && arr[5]==0 && arr[6]==1))
    { printf("1"); arr[3]=1;}
  else
    { printf("0"); arr[3]=0;}
  }
  printf("\n\nMessage after parity bits will be: ");
  for(i=0;i<7;i++)	printf("%d ", arr[i]);
}

printf("\n\nEnter the transmitted message: ");
for(i=0;i<7;i++)	scanf("%d", &arr[i]);

printf("\nTransmitted message is: ");
printf("\nTransmitted message is: ");
for(i=0;i<7;i++)	printf("%d ",arr[i]);

    printf("\n\nWant to correct the message in odd or even parity: ");
    printf("\n1. Even Parity.");
    printf("\n2. Odd Parity.");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);

	if(choice==1)
	{

	  printf("\nE3 parity bit is: ");
	  {
	      if(      (arr[3]==0 && arr[4]==0 && arr[5]==0 && arr[6]==0) ||
	               (arr[3]==0 && arr[4]==1 && arr[5]==1 && arr[6]==0) ||
	               (arr[3]==1 && arr[4]==0 && arr[5]==1 && arr[6]==0) ||
	               (arr[3]==1 && arr[4]==1 && arr[5]==0 && arr[6]==0) ||
	               (arr[3]==0 && arr[4]==0 && arr[5]==1 && arr[6]==1) ||
	               (arr[3]==0 && arr[4]==1 && arr[5]==0 && arr[6]==1) ||
	               (arr[3]==1 && arr[4]==0 && arr[5]==0 && arr[6]==1) ||
	               (arr[3]==1 && arr[4]==1 && arr[5]==1 && arr[6]==1)
	          )
	    { printf("0"); arr[3]=0; }
	  else
	    { printf("1"); arr[3]=1; }
	  }

	  printf("\nE2 parity bit is: ");
	  {
	  if((arr[1]==0 && arr[2]==0 && arr[5]==0 && arr[6]==0) ||
	     (arr[1]==0 && arr[2]==1 && arr[5]==1 && arr[6]==0) ||
	     (arr[1]==1 && arr[2]==0 && arr[5]==1 && arr[6]==0) ||
	     (arr[1]==1 && arr[2]==1 && arr[5]==0 && arr[6]==0) ||
	     (arr[1]==0 && arr[4]==0 && arr[5]==1 && arr[6]==1) ||
	     (arr[1]==0 && arr[2]==1 && arr[5]==0 && arr[6]==1) ||
	     (arr[1]==1 && arr[2]==0 && arr[5]==0 && arr[6]==1) ||
	     (arr[1]==1 && arr[2]==1 && arr[5]==1 && arr[6]==1))
	  	{ printf("0"); arr[1]=0; }
	  else
	  	{ printf("1"); arr[1]=1; }
	   }
	   printf("\nE1 parity bit is: ");
	   
	   if((arr[0]==0 && arr[2]==0 && arr[4]==0 && arr[6]==0) ||
	      (arr[0]==0 && arr[2]==1 && arr[4]==1 && arr[6]==0) ||
	      (arr[0]==1 && arr[2]==0 && arr[4]==1 && arr[6]==0) ||
	      (arr[0]==1 && arr[2]==1 && arr[4]==0 && arr[6]==0) ||
	      (arr[0]==0 && arr[4]==0 && arr[4]==1 && arr[6]==1) ||
	      (arr[0]==0 && arr[2]==1 && arr[4]==0 && arr[6]==1) ||
	      (arr[0]==1 && arr[2]==0 && arr[4]==0 && arr[6]==1) ||
	      (arr[0]==1 && arr[2]==1 && arr[4]==1 && arr[6]==1))
	           { printf("0"); arr[0]=0; }
	   else
	           { printf("1"); arr[0]=1; }
	    

	}

	if(choice==2)
	{

	  printf("\nE3 parity bit is: ");
	  {
	  if( (arr[3]==0 && arr[4]==0 && arr[5]==0 && arr[6]==0) ||
	           (arr[3]==0 && arr[4]==1 && arr[5]==1 && arr[6]==0) ||
	           (arr[3]==1 && arr[4]==0 && arr[5]==1 && arr[6]==0) ||
	           (arr[3]==1 && arr[4]==1 && arr[5]==0 && arr[6]==0) ||
	           (arr[3]==0 && arr[4]==0 && arr[5]==1 && arr[6]==1) ||
	           (arr[3]==0 && arr[4]==1 && arr[5]==0 && arr[6]==1) ||
	           (arr[3]==1 && arr[4]==0 && arr[5]==0 && arr[6]==1) ||
	           (arr[3]==1 && arr[4]==1 && arr[5]==1 && arr[6]==1))
	    { printf("0"); arr[3]=0; }
	  else
	    { printf("1"); arr[3]=1; }
	  }

	  printf("\nE2 parity bit is: ");
	  {
	  if((arr[1]==0 && arr[2]==0 && arr[5]==0 && arr[6]==0) ||
	     (arr[1]==0 && arr[2]==1 && arr[5]==1 && arr[6]==0) ||
	     (arr[1]==1 && arr[2]==0 && arr[5]==1 && arr[6]==0) ||
	     (arr[1]==1 && arr[2]==1 && arr[5]==0 && arr[6]==0) ||
	     (arr[1]==0 && arr[4]==0 && arr[5]==1 && arr[6]==1) ||
	     (arr[1]==0 && arr[2]==1 && arr[5]==0 && arr[6]==1) ||
	     (arr[1]==1 && arr[2]==0 && arr[5]==0 && arr[6]==1) ||
	     (arr[1]==1 && arr[2]==1 && arr[5]==1 && arr[6]==1))
	  	{ printf("0"); arr[1]=0; }
	  else
	  	{ printf("1"); arr[1]=1; }
	   }

	   printf("\nE1 parity bit is: ");
	   
	   if( (arr[0]==0 && arr[2]==0 && arr[4]==0 && arr[6]==0) ||
	      (arr[0]==0 && arr[2]==1 && arr[4]==1 && arr[6]==0) ||
	      (arr[0]==1 && arr[2]==0 && arr[4]==1 && arr[6]==0) ||
	      (arr[0]==1 && arr[2]==1 && arr[4]==0 && arr[6]==0) ||
	      (arr[0]==0 && arr[4]==0 && arr[4]==1 && arr[6]==1) ||
	      (arr[0]==0 && arr[2]==1 && arr[4]==0 && arr[6]==1) ||
	      (arr[0]==1 && arr[2]==0 && arr[4]==0 && arr[6]==1) ||
	      (arr[0]==1 && arr[2]==1 && arr[4]==1 && arr[6]==1))
	           { printf("0"); arr[0]=0; }
	   else
	           { printf("1"); arr[0]=1; }
	}

	

printf("\n\nThe error is at position: %d %d %d", arr[3], arr[1], arr[0]);

return 0;
}