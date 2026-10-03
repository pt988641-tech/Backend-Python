#include<stdio.h>
#include<conio.h>

float total(float price, int qty) {
    return price * qty;
}

void main() {
    float price = 350.0;
    int qty = 5;

    float gtotal = total(price, qty);

    printf("Total Bill Amount: %.2f\n", gtotal);

    getch();
}
