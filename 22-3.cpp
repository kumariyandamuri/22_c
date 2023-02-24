//Write a program to print 1 to n and n to 1 
#include<stdio.h>
main()
{
	int a,b,n;
	scanf("%d",&n);
	for(a=1,b=n;a<=n&&b>=a; a++,b--)
	printf("%d %d \n",a,b);
    
}

