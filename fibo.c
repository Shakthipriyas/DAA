#include<stdio.h>
void main()
{
	int f1=0,f2=1,f3;
	int num,i;
	printf("enter a number");
	scanf("%d",&num);
	if(f1==num)
	{
		return f1;
	}
	else
	{
    printf("%d",f1);
	printf("%d",f2);
	for(i=2;i<=num;i++)
	{
	f3=f1+f2;
	f1=f2;
	f2=f3;
	printf("%d",f3);
     }
 }
}
