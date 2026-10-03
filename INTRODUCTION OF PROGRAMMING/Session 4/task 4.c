#include<stdio.h>
#include<conio.h>

void main() {
    int likes = 1700;
    int comments = 130;
    int shares = 60;

    if (likes >= 1000 || (comments > 200 && shares >= 50))
        printf("Post is Trending!");
    else
        printf("Post is Not Trending.");

    getch();
}
