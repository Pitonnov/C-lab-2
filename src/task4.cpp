#include "task4.h"
#include <string.h>

char* process(char* line)
{
    int x = 0;
    int z = strlen(line) - 1;
    int zip = '0';
    for (; x < z; x++)
    {
        if ('0' <= line[x] && line[x] <= '9')
        {
            zip = line[x];
            while ('0' <= line[z] && line[z] <= '9')
                z--;
            line[x] = line[z];
            line[z] = zip;
            z--;
        }
    }
    return line;
}