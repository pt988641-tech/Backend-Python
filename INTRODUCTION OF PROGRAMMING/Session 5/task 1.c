#include <stdio.h>
#include <string.h>

int main() {
    char team[50];

    printf("Enter your favorite IPL team: ");
    scanf("%49s", team);

    if (strcmp(team, "MI") == 0) {
        printf("Go Mumbai Indians!\n");
    }
    else if (strcmp(team, "CSK") == 0) {
        printf("Chennai Super Kings for the win!\n");
    }
    else if (strcmp(team, "RCB") == 0) {
        printf("Come on Royal Challengers Bengaluru!\n");
    }
    else if (strcmp(team, "KKR") == 0) {
        printf("Korbo Lorbo Jeetbo - Kolkata Knight Riders!\n");
    }
    else if (strcmp(team, "SRH") == 0) {
        printf("Go Sunrisers Hyderabad!\n");
    }
    else if (strcmp(team, "GT") == 0) {
        printf("Gujarat Titans, let's go!\n");
    }
    else if (strcmp(team, "RR") == 0) {
        printf("Halla Bol, Rajasthan Royals!\n");
    }
    else if (strcmp(team, "PBKS") == 0) {
        printf("Punjab Kings, bring the fire!\n");
    }
    else if (strcmp(team, "DC") == 0) {
        printf("Delhi Capitals, let's win!\n");
    }
    else if (strcmp(team, "LSG") == 0) {
        printf("Lucknow Super Giants, roar on!\n");
    }
    else {
        printf("Team not found!\n");
    }

    return 0;
}
