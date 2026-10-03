#include <stdio.h>

// Function to check whether a number is even
int isEven(int num)
{
    // Check if the number is divisible by 2
    if (num % 2 == 0)
    {
        // Return 1 if the number is even
        return 1;
    }
    else
    {
        // Return 0 if the number is odd
        return 0;
    }
}

int main()
{
    int num;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check the result using the isEven function
    if (isEven(num))
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }

    return 0;
}
