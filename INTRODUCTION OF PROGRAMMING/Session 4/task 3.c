#include<stdio.h>
#include<conio.h>

void main() {
    int count = 110;

    printf("Before: %d\n", count);

    // Pre-increment
    printf("Pre-increment: %d\n", ++count);
    printf("After pre-increment: %d\n", count);

    // Post-increment
    printf("Post-increment: %d\n", count++);
    printf("After post-increment: %d\n", count);

    getch();
}
