#include "task1.h"
#define G 9.81

float height(int currTime, int startHeight)
{
     return (startHeight - G *(currTime * currTime) / 2);
}