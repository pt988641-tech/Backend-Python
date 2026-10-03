#include<stdio.h>
#include<conio.h>

void main() {
    float pprice = 2200.0;
    float discountPer = 7.0;
    float discountAmt;
    float fprice;
    int isMember = 1;  

    
    discountAmt = (pprice * discountPer) / 100;
    fprice = pprice - discountAmt;

    
    if (isMember == 1) {
        fprice = fprice - (fprice * 5 / 100);
    }

    printf("Product Price: %.2f\n", pprice);
    printf("Discount: %.2f%%\n", discountPer);
    printf("Member: %s\n", isMember == 1 ? "Yes" : "No");
    printf("Final Price: %.2f\n", fprice);

    getch();
}
