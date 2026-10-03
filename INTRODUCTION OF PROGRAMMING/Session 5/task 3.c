#include<stdio.h>
#include<conio.h>

void main(){
	float amt, dis, famt;

    printf("Enter total cart amount: ");
    scanf("%f", &amt);

    if (amt > 2000) {
        dis = amt * 0.20;
    }
    else {
        if (amt > 1000) {
            dis = amt * 0.10;
        }
        else {
            dis = 0;
        }
    }

    famt = amt - dis;

    printf("Discount: %.2f\n", dis);
    printf("Final amount to pay: %.2f", famt);
	
	getch();
}
