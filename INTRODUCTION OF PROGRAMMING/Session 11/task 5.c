#include <stdio.h>

int main() {
    int likes = 100;
    int *ptrLikes;

    ptrLikes = &likes;

    printf("Likes = %d\n", likes);
    printf("Address of likes = %p\n", (void*)&likes);
    printf("Address stored in ptrLikes = %p\n", (void*)ptrLikes);

    return 0;
}
