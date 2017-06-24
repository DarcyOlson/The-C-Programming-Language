#include <stdio.h>

float temperature_converter(float celsius){
	float farhenheit = (9.0/5.0)*celsius + 32.0;
	return farhenheit;
}

int main(){
	printf("%f \n",temperature_converter(-30.0));
	return 0;
}

