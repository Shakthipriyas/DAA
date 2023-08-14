#include<stdio.h>
int main()
{
	int size;
	int arr[size];
	int i,j;
	printf("enter the size of an array: ");
	scanf("%d",&size);
	printf("enter the elements of an array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
