#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,n3,i,n;
	printf("enter the range:");
	scanf("%d",&n);
	n1=0;
	n2=1;
	n3=0;
	printf("%d\t",n1);
	printf("%d\t",n2);
	for(i=2;i<n;i++)
	{
		n3=n1+n2;
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}
