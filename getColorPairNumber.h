enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet"};
extern const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

extern int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
extern int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

typedef struct 
{
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

int GetPairNumberFromColor(const ColorPair* colorPair);
