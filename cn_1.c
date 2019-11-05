#include<stdio.h>

int main()
{
	int n,m;
	int i;

	printf("\n\nEnter the size of message: ");		scanf("%d",&n);
	
	int arr[n],temp[10];

	printf("\n\nEnter the message (in binary): "); 	

	for(i=0; i<n; i++)	scanf("%d", &arr[i]);

	for(i=0;i<n;i++)	temp[i]=arr[i];

	printf("\nMessage entered is: ");
	for(int i=0;i<n;i++)	printf("%d",arr[i]);

	printf("\n\nEnter the size of generator: ");
	scanf("%d",&m);

	int arr1[m];

	printf("\n\nEnter the message generator(in binary): ");
	for(int i=0;i<m;i++)	scanf("%d",&arr1[i]);

	printf("\nMessage after reduntant bits is: ");
	for(int i=n;i<(n+m-1);i++)	arr[i]=0;

	for(int i=0;i<(n+m-1);i++)	printf("%d", arr[i]);

	for(int i=0;i<n;i++)
	{
		if(arr1[0]==arr[i])
		{
			for(int j=0 ,k=i;j<m;j++,k++)
			{
				if( !( arr[k] ^ arr1[j] ) )	arr[k]=0;
				else	arr[k]=1;
			}
		}
	}


	printf("\n\nCRC bits at sender's side are: ");
	for(int i=n;i<(n+m-1);i++)	printf("%d",arr[i]);
	
	int arr2[n+m];
	printf("\nEnter the message( with CRC's bits) at reciever's end: ");

	for(int i=0;i<(n+m-1);i++)	scanf("%d",&arr2[i]);

	printf("\nMessage recieved is: ");
	for(int i=0;i<(n+m-1);i++)	printf("%d",arr2[i]);

	for(int i=0;i<n;i++)
	{
		if(arr1[0]==arr2[i])
		{
			for(int j=0 ,k=i;j<m;j++,k++)
			{
				if( !( arr2[k] ^ arr1[j] ) )	arr2[k]=0;
				else							arr2[k]=1;
			}
		}
	}

  printf("\n\nCRC bits at reciever's side are: ");
  for(int i=n;i<(n+m-1);i++)	printf("%d",arr2[i]);

  return 0;
}//main()