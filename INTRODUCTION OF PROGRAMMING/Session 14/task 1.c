#include<stdio.h>
#include<conio.h>

void main(){
	
    char items[3][20] = {"Burger", "Pizza", "Fries"};
    int prices[3] = {120, 250, 90};
    int i,total = 0;

    // Calculate total price
    for (i=0;i<3;i++){
        total = total + prices[i];
    }

    // Display total
    printf("Total price is: %d", total);

    getch();
}
