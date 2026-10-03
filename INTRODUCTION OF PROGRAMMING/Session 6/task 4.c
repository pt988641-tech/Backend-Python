#include<stdio.h>
#include<conio.h>


void main() {

    // -------------------------------------------------
    // Entry-Controlled Loop
    // Example: for loop
    // The condition is checked BEFORE executing the loop.
    // -------------------------------------------------

    printf("Entry-Controlled Loop (for):\n");
	int i;
    for (i=1; i<=0;i++) {
        printf("%d\n", i);
    }

    // Condition (1 <= 0) is false at the start,
    // so the loop executes 0 times.


    // -------------------------------------------------
    // Exit-Controlled Loop
    // Example: do-while loop
    // The loop body executes FIRST, then condition is checked.
    // -------------------------------------------------

    printf("\nExit-Controlled Loop (do-while):\n");

    int j = 1;

    do {
        printf("%d\n", j);

        // j becomes 2
        j++;

    } while (j <= 0);

    // Condition (2 <= 0) is false,
    // but the loop executed once before checking the condition.


    // -------------------------------------------------
    // Difference:
    //
    // Entry-Controlled:
    // Condition -> Execute
    // If condition is false initially -> 0 executions
    //
    // Exit-Controlled:
    // Execute -> Condition
    // If condition is false initially -> 1 execution
    // -------------------------------------------------

	getch();
}
