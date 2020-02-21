#include "task4.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* random(char* line)  
{
    int w = 0;
    for (w = 0; w < 10; w++)
    {
        switch (rand() % 3)
        {
           case 0:
         {
               line[w] = rand() % 10 + '0';
               break;
         }
           case 1:
         {
               line[w] = rand() % 26 + 'A';
               break;
         }
           case 2:
         {
               line[w] = rand() % 26 + 'a';
               break;
         }
        }
    }
    line[10] = '\0';
    return line;
}

int main()
{
    char line[11] = { 0 };
    int q = 4;
    for (q = 4; q; q--)
    {
        printf("%s\n", random(line));
        printf("%s\n\n", process(line));
    }
    return 0;
}