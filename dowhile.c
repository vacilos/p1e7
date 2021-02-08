#include <stdio.h>

int main(void)
{
	int x, i, sum;
	double average;
	sum = 0;
	counter = 0;
	
	do{
		printf("Enter number: \n");
		scanf("%d", &x);
		if (x >= 0 && x <= 100){
			counter++;
			sum += x;
		}
	} while (x >= 0 && x <= 100);
	
	average = (double)sum / counter;
	if(counter > 0) // afto einai anagkaio alliws o M.O. tha exei diairesi me 0.
		printf("Plithos: %d\n",i);
		printf("Athroisma: %d\n",sum);
		printf("Mesos Oros: %lf\n",average);
	}
	else{
		printf("Kaneis arithmos\n");
	}
	
	return 0;
}
