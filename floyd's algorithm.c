#include<stdio.h>
void floyd(int a[4][4], int n)
{
	int k;
	for(k=0;k<n;k++)
	{
		int i;
		for( i=0;i<n;i++)
		{
			int j;
			for(j=0;j<n;j++)
			{
				if(a[i][j]>a[i][k]+a[k][j])
				{
					a[i][j]=a[i][k]+a[k][j];
				}
		    }
	    }
	}
	printf("All Pairs Shortest Path is :\n");
	int i;
		for(i=0;i<n;i++)
	    {
	    	int j;
	    	for(j=0;j<n;j++)
	    	{
	    		printf("%d ",a[i][j]);
			}
	    	printf("\n");
		}
}
int main()
{
	int cost[4][4] = {{0, 3, 999, 4}, {8, 0, 2, 999}, {5, 999, 0, 1}, {2, 999, 999, 0}}; 
	int n = 4;

	floyd(cost,n);
}
