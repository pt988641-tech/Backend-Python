#include <stdio.h>
#include <conio.h>

int main() {
	float basic , hra , da , total;
	
	printf("Enter Basic salary");
	scanf("%f", &basic);
	
	printf("Enter HRA");
	scanf("%f", &hra);
	
	printf("Enter DA");
	scanf("%f" , &da);
	
	total = basic + hra + da;
	
	printf("Total Salary :%.2f",total); 
	
	
	return 0;
}
