#include <stdio.h>

struct InstaProfile
{
    char username[50];
    int followers;

    struct Bio
    {
        char description[100];
        int age;
    } bio;
};

int main()
{
    struct InstaProfile profile = {
        "palak020",
        1100,
        {"C programming learner", 19}
    };

    printf("Username: %s\n", profile.username);
    printf("Followers: %d\n", profile.followers);
    printf("Bio: %s\n", profile.bio.description);
    printf("Age: %d\n", profile.bio.age);

    return 0;
}
