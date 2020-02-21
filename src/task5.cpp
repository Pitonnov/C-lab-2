#include "task5.h"
#include <stdlib.h>

char* password(char* line)
{
    for (int x = 0; x < 8; x++) 
    {
        switch (rand() % 3)
        {
           case 0 :
           {
               line[x] = rand() % ('9' - '0' + 1) + '0';
               break;
           }
           case 1:
           {
               line[x] = rand() % ('Z' - 'A' + 1) + 'A';
               break;
           }
           case 2:
           {
               line[x] = rand() % ('z' - 'a' + 1) + 'a';
               break;
           }
        }
    }
    line[8] = '\0';
    return line;
}