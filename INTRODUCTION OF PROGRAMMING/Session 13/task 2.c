#include <stdio.h>

struct FoodItem {
    char itemName[50];
    float price;
    float rating;
};

int main() {
    struct FoodItem menu[3] = {
        {"Pizza", 250.00, 4.5},
        {"Burger", 150.00, 4.2},
        {"Biryani", 200.00, 4.7}
    };

    int i;

    for (i = 0; i < 3; i++) {
        printf("Item Name: %s\n", menu[i].itemName);
        printf("Price: Rs. %.2f\n", menu[i].price);
        printf("Rating: %.1f\n", menu[i].rating);
        printf("-------------------\n");
    }

    return 0;
}
