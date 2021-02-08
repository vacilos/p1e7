#include <stdio.h>

int main(void)
{
	int x;
	for(x = 30; x <= 1000; x++) {
		// an i eswteriki parenthesi einai true tote den prepei na tipwsw. Sinepws h "arnisi" sto mprosta meros "!" tipwnei se oles
		// tis ipoloipes periptwseis...
		if(! ((x % 7 == 0) || (x > 49 && x < 60) || (x > 499 && x < 600)) ) { 
			printf("%d\n", x);
		}
	}
	return 0;
}
