#include <stdio.h>
#include "getRefereceManual.h"

void getReferenceManual(void)
{
	int MajorColorIndex = 0, MinorColorIndex = 0, PairNumber = 0;
	printf("\n---------------------------------------------\n");
	printf("\tREFERENCE MANUAL");
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
