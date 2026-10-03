#include <stdio.h>
int main() {
    int music[7] = {0};
    int i, choice;
    int total, max;
    float avg;
    FILE *fp;

    while(1) {
        printf("\n--- Music Logger Menu ---\n");
        printf("1. Log & Save\n");
        printf("2. View Summary\n");
        printf("3. Weekly Report (Total/Avg/Max)\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            fp = fopen("music_log.txt", "w");
            for(i=0; i<7; i++) {
                printf("Day %d: ", i+1);
                scanf("%d", &music[i]);
                fprintf(fp, "%d\n", music[i]);
            }
            fclose(fp);
            printf("Saved!\n");
        }
        else if(choice == 2) {
            fp = fopen("music_log.txt", "r"); // r = read mode
            if(fp == NULL) {
                printf("Pehle data daalo, file nahi hai!\n");
            } else {
                printf("\n--- Data from File ---\n");
                for(i=0; i<7; i++) {
                    fscanf(fp, "%d", &music[i]); // file se padhna
                    printf("Day %d : %d mins\n", i+1, music[i]);
                }
                fclose(fp);
            }
        }
        else if(choice == 3) { // NAYA REPORT WALA CODE
            fp = fopen("music_log.txt", "r");
            if(fp == NULL) {
                printf("File nahi mili!\n");
            } else {
                total = 0;
                max = 0;
                for(i=0; i<7; i++) {
                    fscanf(fp, "%d", &music[i]);
                    total = total + music[i]; // total jodte jao

                    if(music[i] > max) {
                        max = music[i]; // sabse bada dhoondo
                    }
                }
                fclose(fp);
                avg = total / 7.0; // 7.0 se divide taaki point me aaye

                printf("\n--- WEEKLY REPORT ---\n");
                printf("Total Listening: %d mins\n", total);
                printf("Average per Day: %.2f mins\n", avg);
                printf("Highest in a Day: %d mins\n", max);
            }
        }
        else if(choice == 4) {
            break;
        }
    }
    return 0;
}
