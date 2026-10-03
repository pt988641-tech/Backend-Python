#include <stdio.h>

int main() {
    char productName[] = "Samsung Galaxy M15";
    float price = 14999.99f;
    double rating = 4.5;

    printf("Product Name: %s (String)\n", productName);
    printf("Price: %.2f (Float)\n", price);
    printf("Rating: %.1f (Double)\n", rating);

    return 0;
}
