#include <stdio.h>

int main() 
{
	int numArr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("%d\n", numArr[0]);

	for (int i = 0; i < sizeof(numArr)/ sizeof(int); i++) {
		printf("%d\n",numArr[i]);
	}

	return 0;
}