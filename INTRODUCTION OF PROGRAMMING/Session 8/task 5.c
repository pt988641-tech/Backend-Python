#include <stdio.h>
#include <ctype.h>

void capitalizeFirstLetter(char str[]) {
    if (str[0] != '\0') {
        str[0] = toupper(str[0]);
    }
}

int main() {
    char productName[] = "laptop";
    char username[] = "palak";

    capitalizeFirstLetter(productName);
    capitalizeFirstLetter(username);

    printf("Product Name: %s\n", productName);
    printf("Username: %s\n", username);

    return 0;
}
