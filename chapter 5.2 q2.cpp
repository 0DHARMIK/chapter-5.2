#include<stdio.h>

main()

{
	int a,b,c; 
	
	printf("enter the value =a");
	scanf("%d",&a);
	
	printf("enter the value =b");
	scanf("%d",&b);
	
	printf("enter the value =c");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("a is maximum");
		}
		else
		{
			printf("c is maximum");
		}
	}
	
	else
	{
		if(b>c)
		{
			printf("b is maximum");
		}
		else
		{
			printf("c is maximum");
		}
	}
	
}