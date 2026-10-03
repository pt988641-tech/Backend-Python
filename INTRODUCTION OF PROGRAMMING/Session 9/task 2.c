#include<stdio.h>
#include<conio.h>

void main(){
	
    int playlistRatings[3][5] = {
        {5, 4, 5, 3, 4},
        {4, 5, 3, 5, 4},
        {3, 4, 4, 5, 5}
    };

    printf("Ratings for the second playlist:\n");
    
	int i;
	
    for (i=0;i<5;i++){
        printf("%d ", playlistRatings[1][i]);
    }

    getch();
}
