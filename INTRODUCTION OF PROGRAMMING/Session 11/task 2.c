#include <stdio.h>

void swapPlaylistCounts(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int playlist1 = 25;
    int playlist2 = 40;

    printf("Before swapping: Playlist 1 = %d, Playlist 2 = %d\n", playlist1, playlist2);

    swapPlaylistCounts(&playlist1, &playlist2);

    printf("After swapping: Playlist 1 = %d, Playlist 2 = %d\n", playlist1, playlist2);

    return 0;
}
