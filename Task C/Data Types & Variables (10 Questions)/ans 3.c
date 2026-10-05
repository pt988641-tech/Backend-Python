#include<stdio.h>
#include<conio.h>

int main() {
	int length , width , area;
	
	printf("Enter length");
	scanf("%d",&length);
	
	printf("Enter width");
	scanf("%d",&width);
	
	printf("Enter area");
	scanf("%d",&area);
	
	
	area = length*width;
	printf("Area = %d", area);
	
	
	return 0;
}
