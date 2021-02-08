#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Enter number: \n");
	scanf("%d", &x);
	
	if(x < 0 ){
		printf("ERROR\n");	
	}
	else if(x == 0){	
		printf("zero\n");
	}
	else if(x%2 == 0){
		printf("even number\n");
	}
	else {
		printf("odd number\n");
	}
	return 0;
}
