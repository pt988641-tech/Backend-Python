#include<stdio.h>
#include<conio.h>

#define DAYS 7

// Function to log listening minutes
int logListening(int minutes[]){
    int i;

    printf("\nEnter listening minutes for 7 days:\n");

    for(i=0;i<DAYS;i++){
        printf("Day %d: ", i + 1);
        scanf("%d", &minutes[i]);
    }

    printf("\nListening data saved successfully!\n");
}

// Function to save data into file
int saveToFile(int minutes[]){
	
    FILE *file = fopen("music_log.txt", "w");

    int i;

    if (file == NULL){
        printf("Error opening file!\n");
        return;
    }

    // Save each day's minutes
    for(i=0;i<DAYS;i++){
        fprintf(file, "%d\n", minutes[i]);
    }

    fclose(file);
}

// Function to display weekly summary
int viewSummary(int minutes[]){
	
    int i,total = 0,highest = 0;
    float average;

    for(i=0;i<DAYS;i++){
        total = total + minutes[i];

        if (minutes[i]>highest){
            highest = minutes[i];
        }
    }

    average = total / 7.0;

    printf("\n----- Weekly Summary -----\n");

    for(i=0;i<DAYS;i++){
    	
        printf("Day %d: %d minutes\n", i + 1, minutes[i]);
    }

    printf("\nTotal Listening: %d minutes", total);
    printf("\nAverage Listening: %.2f minutes", average);
    printf("\nHighest Listening: %d minutes\n", highest);
}

// Function to read data from file and generate report
int weeklyReport(){
	
    FILE *file = fopen("music_log.txt", "r");
    int minutes[DAYS];
    int i,total = 0,highest = 0;
    float average;


    if (file == NULL){
        printf("\nNo saved music data found!\n");
        return 1;
    }

    for(i=0;i<DAYS;i++){
        fscanf(file, "%d", &minutes[i]);
    }

    fclose(file);

    for(i=0;i<DAYS;i++){
        total = total + minutes[i];

        if (minutes[i] > highest){
            highest = minutes[i];
        }
    }

    average = total / 7.0;

    printf("\n===== Weekly Music Report =====\n");

    printf("Total Listening   : %d minutes\n", total);
    printf("Average Listening : %.2f minutes\n", average);
    printf("Highest Listening : %d minutes\n", highest);
}

// Function to reset weekly data
int resetData(int minutes[]){
    FILE *file;
    char choice;
    int i;

    printf("\nAre you sure you want to reset all data? (Y/N): ");
    scanf(" %c", &choice);

    if (choice == 'Y' || choice == 'y'){
    	
        for(i=0;i<DAYS;i++){
            minutes[i] = 0;
        }

        file = fopen("music_log.txt", "w");

        if (file != NULL)        {
            fclose(file);
        }

        printf("\nWeekly data has been reset successfully!\n");
    }
    else
    {
        printf("\nReset cancelled.\n");
    }
}

int main(){
    int minutes[DAYS] = {0};
    int choice;

    do{
        printf("\n\n==============================");
        printf("\n   MUSIC LISTENING LOGGER");
        printf("\n==============================");
        printf("\n1. Log Listening Minutes");
        printf("\n2. View Weekly Summary");
        printf("\n3. Generate Weekly Report");
        printf("\n4. Reset Weekly Data");
        printf("\n5. Exit");
        printf("\n==============================");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                logListening(minutes);
                saveToFile(minutes);
                break;

            case 2:
                viewSummary(minutes);
                break;

            case 3:
                weeklyReport();
                break;

            case 4:
                resetData(minutes);
                break;

            case 5:
                printf("\nThank you for using Music Listening Logger!");
                break;

            default:
                printf("\nInvalid choice! Please try again.");
        }

    } while (choice != 5);
	
	return 0;
}
