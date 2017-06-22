#include <stdio.h>
/* Here we are asked to modify the temperature conversion program to
print a heading above the table*/
/*
	We are then asked to write a program to print a Celsius to Fahrenheit
	table
*/
//the /* */ are comments...so is this
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ... 300 */

int main(){
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; // lower limit of temperature
	upper = 300; //upper limit of temperature
	step = 20; //step size

	fahr = lower;
	/*
		The following printf statement completes the first assignment
	*/
	printf("Fahrenehit to Celsius Table \n \n");
	while(fahr <= upper){
		celsius = 5*(fahr-32)/9;
		printf("%f\t%f\n", fahr, celsius);
		fahr = fahr + step;
	}
	/*
		This code completes the second assignment
	*/
	celsius = lower;
	printf("Celsisus to Fahrenehit Table \n \n");
	while(celsius <= upper){
		fahr = (1/9.0)*((1/5.0)*celsius)+32;
		printf("%f\t%f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}