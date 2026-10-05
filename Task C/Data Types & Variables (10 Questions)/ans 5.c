#include<stdio.h>
#include<conio.h>

void main()
{
	int AM , PM , Clock;
	
	printf("Enter your AM :");
	scanf("%d", &AM);
	
	printf("Enter your PM :");
	scanf("%d", &PM);
	
	Clock = AM;
	AM = PM;
	PM = Clock;
	
	printf("After swapping : AM = %d , PM = %d", AM,PM);
	
	getch ();
}
