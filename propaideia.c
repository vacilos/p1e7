#include <stdio.h>

int main(void)
{
	int x, y;
	for (x = 1; x <= 10; x++) {
		printf("Propaideia arithmou %d\n", x);
		for(y = 1; y <= 10; y++) { 
			printf("%d \t", x*y);
		}
		printf(" \n\n"); // gia na valei tin epomeni propaideia se alli grammi
	}
	return 0;
}
