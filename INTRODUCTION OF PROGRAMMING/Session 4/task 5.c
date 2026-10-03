#include<stdio.h>
#include<conio.h>

int isEligibleForOffer(int age, float orderValue) {
    return age >= 18 && orderValue > 500;
}

void main() {
    int age = 12;
    float orderValue = 600;

    if (isEligibleForOffer(age, orderValue))
        printf("Eligible for offer");
    else
        printf("Not eligible for offer");

    getch();
}
