#include <stdio.h>

int main() {
    int cricketScores[4][2] = {
        {185, 172},
        {160, 195},
        {210, 198},
        {175, 180}
    };

    int i,j; 

    for (i = 0; i < 4; i++) {
        int highest = cricketScores[i][0];

        for ( j = 1; j < 2; j++) {
            if (cricketScores[i][j] > highest) {
                highest = cricketScores[i][j];
            }
        }

        printf("Match %d highest score: %d\n", i + 1, highest);
    }

    return 0;
}
