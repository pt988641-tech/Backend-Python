#include <stdio.h>

int main() {
    int music[7] = {0};
    int i, choice;
    int total = 0, max = 0;
    float avg = 0;
    FILE *fp;

    while(1) {
        printf("\n--- Music Logger Menu ---\n");
        printf("1. Log & Save\n");
        printf("2. View Summary\n");
        printf("3. Weekly Report\n");
        printf("4. Reset Data\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            fp = fopen("music_log.txt", "w");
            if(fp == NULL) {
                printf("File open error!\n");
            } else {
                for(i=0; i<7; i++) {
                    printf("Day %d: ", i+1);
                    scanf("%d", &music[i]);
                    fprintf(fp, "%d\n", music[i]);
                }
                fclose(fp);
                printf("Saved!\n");
            }
        }
        else if(choice == 2) {
            fp = fopen("music_log.txt", "r");
            if(fp == NULL) {
                printf("No data found! Pehle choice 1 se data dalo.\n");
            } else {
                printf("\n--- Data from File ---\n");
                for(i=0; i<7; i++) {
                    fscanf(fp, "%d", &music[i]);
                    printf("Day %d : %d mins\n", i+1, music[i]);
                }
                fclose(fp);
            }
        }
        else if(choice == 3) {
            fp = fopen("music_log.txt", "r");
            if(fp == NULL) {
                printf("No data found!\n");
            } else {
                total = 0; max = 0;
                for(i=0; i<7; i++) {
                    fscanf(fp, "%d", &music[i]);
                    total = total + music[i];
                    if(music[i] > max) max = music[i];
                }
                fclose(fp);
                avg = total / 7.0;
                printf("\n--- WEEKLY REPORT ---\n");
                printf("Total: %d\n", total);
                printf("Average: %.2f\n", avg);
                printf("Highest: %d\n", max);
            }
        }
        else if(choice == 4) {
            fp = fopen("music_log.txt", "w");
            if(fp!= NULL) fclose(fp);
            for(i=0; i<7; i++) music[i]=0;
            printf("Data Reset Done!\n");
        }
        else if(choice == 5) {
            printf("Exit...\n");
            break;
        }
        else {
            printf("Galat choice!\n");
        }
    }
    return 0;
}
