#include <stdio.h>

int main()
{
    int i;

    /* Check numbers from 1 to 10 */
    for (i = 1; i <= 10; i++)
    {
        /* Even number ka remainder 0 hota hai */
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
