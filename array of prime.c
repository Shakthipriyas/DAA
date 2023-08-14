#include<stdio.h>
int main()
{
	int s,i,j,n;
	printf("enter a size: ");
	scanf("%d",&s);
	for(i=1;i<=s;i++)
{
	printf("%d ",i);
}
	for(j=2;j<i;j++)
	{
		if(i%j!=0)
		{
			n++;
		}
	}
	for(i=0;i<=s;i++)
	{
	if(n==1)
	{
		printf("\t");
			printf("%d the num: ",i);
	}
}
	return 0;
}
