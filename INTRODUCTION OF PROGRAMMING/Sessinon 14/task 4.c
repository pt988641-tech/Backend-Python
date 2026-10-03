#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *file;
    char song[100];
    char lowerSong[100];
    int i;

    file = fopen("playlist.txt", "r");

    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("Songs containing 'love':\n");

    while (fgets(song, sizeof(song), file) != NULL) {

        // Convert song name to lowercase
        for (i = 0; song[i] != '\0'; i++) {
            lowerSong[i] = tolower(song[i]);
        }
        lowerSong[i] = '\0';

        // Check if "love" is present
        if (strstr(lowerSong, "love") != NULL) {
            printf("%s", song);
        }
    }

    fclose(file);

    return 0;
}
