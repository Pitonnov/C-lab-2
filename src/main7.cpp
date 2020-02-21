#include <stdio.h>
#include <string.h>

int main()
{
    char str[255] = { 0 }; 
    char count[255] = { 0 }; 
    int x = 0, w = 0; 
    printf("Enter your line: ");
    fgets(str, 255, stdin); 

    if (str[strlen(str) - 1] == '\n') 
        str[strlen(str) - 1] = '\0';
    while (str[x]) 
    {
        count[str[x]]++;
        x++;
    }
    while (w < 255)
    {
        if (count[w] != 0)
            printf("%c = %d\n", w, count[w]);
        w++;
    }
    return 0;
}