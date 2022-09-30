#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	printf("enter a value :");
	scanf("%d" ,&n);
	i=2;
	while(i<=n)
	{
		printf("%d ",i);
		i=i+2;
	}
	getch();
	
}
