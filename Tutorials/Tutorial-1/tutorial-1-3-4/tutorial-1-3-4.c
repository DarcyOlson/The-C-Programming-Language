#include <stdio.h>
/*
	We are asked to reverse the temperature to print from 300 to 0
*/
/* print Fahrenheit-Celsius table */

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
	int fahr;
	/* This is the intial loop */
	/*
	for(fahr = 0; fahr <= 300;fahr = fahr + 20){
		printf("%d %f \n",fahr,(5.0/9.0)*(fahr-32));
	}
	*/
	/* This is the edited loop */
	for(fahr = UPPER; fahr >= LOWER;fahr = fahr - STEP){
		printf("%d %f \n",fahr,(5.0/9.0)*(fahr-32));
	}
}