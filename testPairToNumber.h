extern enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

extern int numberOfMajorColors;
extern int numberOfMinorColors;

typedef struct 
{
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
