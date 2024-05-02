#include <stdio.h>

int main() {
	
	unsigned int v = 44; // 32-bit word to find the log base 2 of
	unsigned int r = 0; // r will be lg(v)

	while (v >>= 1) // unroll for more speed...
	{
		printf("%d\n\r", v);
		r++;
	}

	printf("%d\n\r", r);

	return 0;
}