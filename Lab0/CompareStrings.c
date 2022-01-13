#include "Header.h"

int CompareStrings(const char *lhs, const char *rhs)
{
	int leftsize = strlen(lhs);
	int rightsize = strlen(rhs);
	for (int i = 0; i < leftsize && i < rightsize; i++)
		if (lhs[i] < rhs[i])
			return -1;
		else if (lhs[i] > rhs[i])
			return 1;
	if (leftsize < rightsize)
		return -1;
	else if (leftsize > rightsize)
		return 1;
	return 0;
}
