#include <stdio.h>

// Function to format follower count like Instagram
void formatFollowersCount(int count)
{
    // If followers are 1 million or more
    if (count >= 1000000)
    {
        printf("%.1fM", count / 1000000.0);
    }
    // If followers are 1000 or more
    else if (count >= 1000)
    {
        printf("%.1fK", count / 1000.0);
    }
    // If followers are below 1000
    else
    {
        printf("%d", count);
    }
}

int main()
{
    // Test different follower counts
    printf("1500 = ");
    formatFollowersCount(1500);

    printf("\n1200000 = ");
    formatFollowersCount(1200000);

    printf("\n500 = ");
    formatFollowersCount(500);

    return 0;
}
