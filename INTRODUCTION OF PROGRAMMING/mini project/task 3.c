#include <stdio.h>
int main() {
    int music[7] = {0};
    int i, choice;
    FILE *fp; // file ka pointer, ye file ko pakadta hai

    while(1) {
        printf("\n--- Music Logger Menu ---\n");
        printf("1. Log Minutes & Save to File\n");
        printf("2. View Weekly Summary\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            fp = fopen("music_log.txt", "w"); // w = write mode, file kholo

            for(i=0; i<7; i++) {
                printf("Day %d: ", i+1);
                scanf("%d", &music[i]);
                fprintf(fp, "%d\n", music[i]); // file me likh do
            }

            fclose(fp); // file band karna zaruri hai
            printf("Data saved to music_log.txt!\n");
        }
        else if(choice == 2) {
            printf("\n--- Weekly Summary ---\n");
            for(i=0; i<7; i++) {
                printf("Day %d : %d mins\n", i+1, music[i]);
            }
        }
        else if(choice == 3) {
            break;
        }
    }
    return 0;
}
