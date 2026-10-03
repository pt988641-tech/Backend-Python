#include <stdio.h>
int main() {
    int music[7] = {0}; // shuru me sab 0
    int i, choice;

    while(1) { // ye loop tab tak chalega jab tak user Exit na bole
        printf("\n--- Music Logger Menu ---\n");
        printf("1. Log Minutes (naya data dalo)\n");
        printf("2. View Weekly Summary (dekho)\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            for(i=0; i<7; i++) {
                printf("Day %d: ", i+1);
                scanf("%d", &music[i]);
            }
        }
        else if(choice == 2) {
            printf("\n--- Weekly Summary ---\n");
            for(i=0; i<7; i++) {
                printf("Day %d : %d mins\n", i+1, music[i]);
            }
        }
        else if(choice == 3) {
            printf("Bye Bye!\n");
            break; // loop tod do, program band
        }
        else {
            printf("Galat choice!\n");
        }
    }
    return 0;
}
