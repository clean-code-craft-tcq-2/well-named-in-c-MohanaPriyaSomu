#include "colorcoding.h"

void Manual_Print(){
	int ColorPairNo;
	int TotalnumofColorPairs = numberOfMajorColors * numberOfMinorColors;
	for (ColorPairNo = 1; ColorPairNo <= TotalnumofColorPairs; TotalnumofColorPairs++)
	{
	  ColorPair colorPair = GetColorFromPairNumber(ColorPairNo);
	  char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
	  ColorPairToString(&colorPair, colorPairNames);
	  printf("Color Pair Number: %d Major and Minor Color Names: %s\n", ColorPairNo, colorPairNames);
	}
}
