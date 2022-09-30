#include<stdio.h>
#include<conio.h>
main()
{
	int m,u;
	m=67;
	
	printf("guess the number(0-100) it's game\n");
	
	while(1)
	{
		printf("enter your number : ");
		scanf("%d",&u);
		
		if(m==u)
		{
			printf("congratulations you win");
			break;
		}
		else if (m>u)
		{
			printf("your guess is wrong\n think greater no.",u);
		}
		else
		{
	    	
		printf("your guess is wrong\n think smaller no.",u);
		}
		getch();
	}
	
}
