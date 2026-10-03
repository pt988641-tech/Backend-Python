#include <stdio.h>

float calculateAverage(int orders[], int size) {
    int sum = 0;
    int i;
    
    for ( i = 0; i < size; i++) {
        sum += orders[i];
    }

    return (float)sum / size;
}

int main() {
    int dailyOrders[7] = {250, 180, 320, 150, 275, 400, 225};

    float average = calculateAverage(dailyOrders, 7);

    printf("Average weekly spend: ?%.2f\n", average);

    return 0;
}
