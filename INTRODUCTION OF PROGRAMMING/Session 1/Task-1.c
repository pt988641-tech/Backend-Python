
/*
A program is a set of instructions written in a programming language that tells
a computer how to perform a specific task. For example, in Instagram, a program
can count the number of likes on a post and display the updated like count when
a user likes the post. In C language, we can create a simple program to add a
new like to the existing number of likes.
*/

#include<stdio.h>
#include<conio.h>

void main(){
    int likes = 150;
    int newLike = 1;
    int totalLikes = likes + newLike;

    printf("Total Likes = %d", totalLikes);

    getch();
}

