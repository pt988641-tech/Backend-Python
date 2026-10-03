#include <stdio.h>

struct Playlist
{
    char title[50];
    char artist[50];
    int duration;
};

int main()
{
    struct Playlist song = {"Kesariya", "Arijit Singh", 268};

    printf("Song Title: %s\n", song.title);
    printf("Artist: %s\n", song.artist);
    printf("Duration: %d seconds\n", song.duration);

    return 0;
}
