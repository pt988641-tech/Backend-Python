#include<stdio.h>
#include<conio.h>

void main() {
    int ch;
    char newTeam[30];

    while (1) {
        printf("\n--- IPL Team Menu ---\n");
        printf("1. View Favorite Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        if (ch == 1) {
            printf("\nFavorite IPL Teams:\n");
            printf("1. GT\n");
            printf("2. CSK\n");
            printf("3. RCB\n");
        }
        else if (ch == 2) {
            printf("Enter new team: ");
            scanf("%s", newTeam);

            printf("%s added successfully!\n", newTeam);
        }
        else if (ch == 3) {
            break;
        }
        else {
            printf("Invalid choice!\n");
        }
    }

    getch();
}
