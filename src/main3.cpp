#include "task3.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int count = 0;
    char buf[256] = { 0 };

    printf("Enter your number of lines: ");
    scanf("%d", &count);

    for (int line = 1; line <= count; line++) 
        printf("%s\n", layout(buf, line, count));

    return 0;
}