#include<stdio.h>
#include<conio.h>

void main(){
	int age;
	
	printf("\nEnter your age : ");
	scanf("%d",&age);
	
	if(age>=18){
		printf("\nEligible for Driving License");
	}
	
		
	if(age>=21){
		printf("\nEligible for Credit Card");
	}
	
		
	if(age>=25){
		printf("\nEligible for Car Rental");
	}
	
	getch();
}
