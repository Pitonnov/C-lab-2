#include "task6.h"
#include <string.h>
#include <stdio.h>


char* clear(char* line)
{
    int q = 0, inWord = 0, i = 0;
    while (1) 
    {
        if (line[strlen(line) - 1] == ' ') 
            line[strlen(line) - 1] = '\0';
        else
            break;
    }
    while (1)
    {
        if (line[0] == ' ')
        {
            i = 0;
            while (line[i])
            {
                line[i] = line[i + 1];
                i++;
            }
        }
        else
            break;
    }
    while (line[q])
    {
        if (line[q] == ' ' && inWord == 0)
        {
            inWord = 1;
            q++;
        }
        else if (line[q] == ' ' && inWord == 1)
        {
            i = q;
            
            while (line[i])
            {
                line[i] = line[i + 1];
                i++;
            }
            if (line[q] != ' ')
            {
                inWord == 0;
                q++;
            }
        }
        else
        {
            q++;
            inWord = 0;
        }
    }
    return line;
}