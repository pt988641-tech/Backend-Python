#include <stdio.h>

struct InstaProfile {
    char username[50];
    int followers;

    struct Bio {
        char description[100];
        int age;
    } bio;
};

int main() {
    struct InstaProfile profile = {
        "palak_thapa",
        1200,
        {"C Programming Student", 19}
    };

    printf("Username: %s\n", profile.username);
    printf("Followers: %d\n", profile.followers);
    printf("Description: %s\n", profile.bio.description);
    printf("Age: %d\n", profile.bio.age);

    return 0;
}
