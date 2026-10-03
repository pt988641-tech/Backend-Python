#include <stdio.h>
#include <stdlib.h>

char* formatPrice(int price) {
    char *result = malloc(20 * sizeof(char));

    if (price >= 1000000) {
        sprintf(result, "?%d,%03d,%03d",
                price / 1000000,
                (price / 1000) % 1000,
                price % 1000);
    } 
    else if (price >= 1000) {
        sprintf(result, "?%d,%03d",
                price / 1000,
                price % 1000);
    } 
    else {
        sprintf(result, "?%d", price);
    }

    return result;
}

int main() {
    int laptop = 55999;
    int headphones = 1599;
    int phone = 24999;

    printf("Laptop: %s\n", formatPrice(laptop));
    printf("Headphones: %s\n", formatPrice(headphones));
    printf("Phone: %s\n", formatPrice(phone));

    return 0;
}
