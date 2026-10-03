#include <stdio.h>

int main() {
    const float GST_RATE = 0.18;  // GST rate = 18%
    float basePrice = 500.0;
    float gstAmount, finalPrice;

    gstAmount = basePrice * GST_RATE;
    finalPrice = basePrice + gstAmount;

    printf("Base Price: ?%.2f\n", basePrice);
    printf("GST (18%%): ?%.2f\n", gstAmount);
    printf("Final Price: ?%.2f\n", finalPrice);

    return 0;
}
