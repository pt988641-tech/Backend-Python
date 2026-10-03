#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("playlist.txt", "a");

    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    fprintf(file, "Blinding Lights\n");
    fprintf(file, "Until I Found You\n");

    fclose(file);

    printf("Two songs added successfully.\n");

    return 0;
}
