#include "task2.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int value = 0, secret = 0, result = 0, wolk = 0;   
    time_t now;
    time(&now);
    srand(now);    
    secret = rand() % 100 + 1; 

    printf("Hello, this is a game random numbers!\n ");
    printf("Computer make number!\n");
   
   
    for (wolk = 0; wolk < 10; wolk++)
    {
        printf("Enter your number: ");
        scanf("%d", &value);

        if (value < 0 || value > 100) 
        {
            printf("Encorect number!");
            break;
        }

        result = turn(value, secret); 
        if (result == 1)
            printf("Your number is larger, try again!\n");
        else if (result == -1)
            printf("Your number is less, try again!\n");
        else if (result == 0)
        {
            printf("Your win!");
                break;
        }
    }
        if (wolk == 10)  
        printf("Your fail, my dear friend!\n");
    
    return 0;
}