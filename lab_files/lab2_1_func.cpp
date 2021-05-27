#include "lab2_1_func.h"

int checkFileErr1(int numOfLines, int numFields)
{
	if (numOfLines == -1) return -1;
	if (numOfLines == 0) return -2;
	else if (numOfLines % numFields != 0) return -3;
	return 0;
}


