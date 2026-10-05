#include<stdio.h>
#include<conio.h>

int main() {
	float celsius , fahrenheit;
	
	printf("Enter tempreature in Celsius");
	scanf("%f",&celsius);
	
	fahrenheit = ( celsius * 9 / 5 ) + 32;
	printf("Temreture in Fahrenheit = %.2f",fahrenheit);
	
	
	
	return 0;
}
