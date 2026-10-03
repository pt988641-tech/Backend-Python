#include <stdio.h>

struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};

int main()
{
    struct FoodItem menu[3] = {
        {"Pizza", 299.00, 4.5},
        {"Burger", 149.00, 4.2},
        {"Biryani", 199.00, 4.7}
    };

    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Food Item: %s\n", menu[i].itemName);
        printf("Price: Rs. %.2f\n", menu[i].price);
        printf("Rating: %.1f\n", menu[i].rating);
        printf("----------------------\n");
    }

    return 0;
}
