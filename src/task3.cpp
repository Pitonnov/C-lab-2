#include "task3.h"

char* layout(char buf[], int line, int count)
{
    int x = 0;
    int open = count - line;
    int go = line * 2 - 1;
    for (open; open; open--, x++)
        buf[x] = ' ';
    for (go; go; go--, x++)
        buf[x] = '*';
    buf[x] = '\0';
    return buf;
}