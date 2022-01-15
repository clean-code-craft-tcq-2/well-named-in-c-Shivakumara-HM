enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
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

const int MAX_COLORPAIR_NAME_CHARS = 16;

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern void ColorPairToString(const ColorPair* colorPair, char* buffer);

