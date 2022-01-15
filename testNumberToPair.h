extern enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
extern enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
extern const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};


extern int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
extern int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

typedef struct 
{
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

const int MAX_COLORPAIR_NAME_CHARS = 16;

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern void ColorPairToString(const ColorPair* colorPair, char* buffer);

