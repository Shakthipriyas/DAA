#include<stdio.h>
#include<conio.h>
int main()
{
	int s,i,j,n;
	printf("enter a size: ");
	scanf("%d",&s);
	for(i=1;i<=s;i++)
{
	if(isprime(i))
	{
		printf("the primes = ",i);
	}
}
	return 0;
}
