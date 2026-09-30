#include <stdio.h>

int main() {
	int marks;
	
	printf("Enter marks:");
	scanf("%d" , &marks);
	
	if (marks >= 90)
	printf("Grade A");
	else if (marks >= 70)
	printf("Grade B");
	else if (marks >= 45)
	printf("Grade c");
	else
	printf("Fail");
	
	return 0;
}
