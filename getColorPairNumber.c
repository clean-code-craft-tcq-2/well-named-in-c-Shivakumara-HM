#include <stdio.h>
#include <assert.h>
#include "getColorPairNumber.h"

int GetPairNumberFromColor(const ColorPair* colorPair) 
{
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}
