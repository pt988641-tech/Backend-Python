#include <stdio.h>
#include <string.h>

void addToCart(char cart[][50], int *size, char product[]) {
   int i;
    printf("\nUpdated Cart:\n");

    for (i = 0; i < *size; i++) {
        printf("%d. %s\n", i + 1, cart[i]);
    }
}

int main() {
    char cart[10][50] = {"Laptop"};
    int size = 1;
    int i;

    printf("Initial Cart:\n");
    printf("1. %s\n", cart[0]);

    addToCart(cart, &size, "Headphones");

    printf("\nCart after function call:\n");
    for ( i = 0; i < size; i++) {
        printf("%d. %s\n", i + 1, cart[i]);
    }

    return 0;
}
