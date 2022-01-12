#include <stdio.h>
#include <public.h>

void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

int GetPairNumberFromColor(const ColorPair* colorPair) 
{
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}
