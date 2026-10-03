#include <stdio.h>
#include <string.h>

int main() {
    char meal[20];

    printf("Enter your preferred meal time: ");
    scanf("%19s", meal);

    if (strcmp(meal, "breakfast") == 0) {
        printf("Suggestion: Try Masala Dosa!\n");
    }
    else if (strcmp(meal, "lunch") == 0) {
        printf("Suggestion: Try Biryani!\n");
    }
    else if (strcmp(meal, "dinner") == 0) {
        printf("Suggestion: Try Butter Paneer with Naan!\n");
    }
    else if (strcmp(meal, "snack") == 0) {
        printf("Suggestion: Try Samosa!\n");
    }
    else {
        printf("Try some fruits!\n");
    }

    return 0;
}

