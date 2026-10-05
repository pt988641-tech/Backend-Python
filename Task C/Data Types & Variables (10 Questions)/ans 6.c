#include<stdio.h>
#include<conio.h>

void main()
{
	int AM , PM ;
	
	printf("Enter your AM :");
	scanf("%d", &AM);
	
	printf("Enter your PM :");
	scanf("%d", &PM);
	
	AM = AM + PM;
	PM = AM - PM;
	AM = AM - PM;
	
	printf("After swapping : AM = %d , PM = %d", AM,PM);
	
	getch ();
}
