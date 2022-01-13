#include <stdio.h>

const char* MajorColor[] = { "White", "Red", "Black", "Yellow", "Violet" };
const char* MinorColor[] = { "Blue", "Orange", "Green", "Brown", "Slate" };

int numberOfMajorColors = sizeof(MajorColor) / sizeof(MajorColor[0]);
int numberOfMinorColors = sizeof(MinorColor) / sizeof(MinorColor[0]);

void getReferenceManual(void)
{
	int MajorColorIndex = 0, MinorColorIndex = 0, PairNumber = 0;
	printf("\n---------------------------------------------\n");
	printf("\tREFERENCE MANAUAL");
	printf("\n---------------------------------------------\n");
	printf("PAIR NO.\t MAJOR COLOR\t MINOR COLOR\n");
	printf("\n---------------------------------------------\n");
	for (MajorColorIndex = 0; MajorColorIndex < numberOfMajorColors; MajorColorIndex++)
	{
		for (MinorColorIndex = 0; MinorColorIndex < numberOfMinorColors; MinorColorIndex++)
		{
			printf("%d\t\t%s\t\t%s\n", ++PairNumber, MajorColor[MajorColorIndex], MinorColor[MinorColorIndex]);
		}
	}
}
