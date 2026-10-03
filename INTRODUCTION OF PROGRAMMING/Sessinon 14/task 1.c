#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("playlist.txt", "w");

    if (file == NULL) {
        printf("File could not be created.\n");
        return 1;
    }

    fprintf(file, "Perfect\n");
    fprintf(file, "Shape of You\n");
    fprintf(file, "Believer\n");

    fclose(file);

    printf("Songs successfully written to playlist.txt\n");

    return 0;
}
