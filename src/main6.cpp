#include "task6.h"
#include <stdio.h>
#include <string.h>
#define CRT_SECURE_NO_WARNINGS

int main()
{
    char line[255] = {0};
    printf(" Enter your line: ");
    fgets(line, 255, stdin);
    if (line[strlen(line) - 1] == '\n') 
        line[strlen(line) - 1] = '\0';
    printf("%s", clear(line));
    return 0;
}