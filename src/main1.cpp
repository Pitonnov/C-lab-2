#include "task1.h"
#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS

int main()
{
    float t_height = 0;
    int currTime = 0, startHeight = 0;

    printf("Enter start height for yours bomb: \n");
    scanf("%d", &startHeight);
    if (startHeight <= 0)
    {
        printf("You enter fail height!");
        return 0;
    }

    while (1)
    {
        t_height = height(currTime, startHeight);

        if (t_height > 0)
            printf("t = %d c   h = %.2f m\n", currTime, t_height);
        else
        {
            printf("BOOOM!!!!!");
            break;
        }
        currTime++;

    }
    
    return 0;
}