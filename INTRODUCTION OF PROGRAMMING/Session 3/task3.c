#include <stdio.h>

int main() {
    char playlistName[] = "My Favorite Hits";
    int totalSongs = 23;
    float averageDuration = 3.5;

    printf("My favorite Spotify playlist is \"%s\", which has %d songs with an average duration of %.1f minutes per song.\n",
           playlistName, totalSongs, averageDuration);

    return 0;
}
