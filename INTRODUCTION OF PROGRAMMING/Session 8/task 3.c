#include<stdio.h>
#include<conio.h>

void ByValue(int followers){
    followers = followers + 1000;

    printf("Inside Pass by Value: %d\n", followers);
}

void ByReference(int *followers){
    *followers = *followers + 1000;

    printf("Inside Pass by Reference: %d\n", *followers);
}

void main(){
    int followers = 5000;

    printf("Original Followers: %d\n\n", followers);

    ByValue(followers);

    printf("After Pass by Value: %d\n\n", followers);

    ByReference(&followers);

    printf("After Pass by Reference: %d\n", followers);

    getch();
}
