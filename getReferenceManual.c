#include <public.h>

void printRefernceManual()
{
    for(pairNumber=1;pairNumber<=(numberOfMajorColors*numberOfMinorColors);pairNumber++)
    {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    ColorPairToString(&colorPair, colorPairNames);
    printf("color number: %d \t color pair: %s    \t Major color: %d \t Minor color: %d \n", pairNumber, colorPairNames, colorPair.majorColor+1, colorPair.minorColor+1);
    }
}
