/* Here we write a program to produce a histogram of the frequencies of different characters in its input */

/* This is a program that prints a histogram on the different types of
characters used as input */
#include <stdio.h>
/* We define 3 different character types: numbers, letters and others */
#define NUMBER_OF_CHARACTERS 3 

int main(){
	/* this variable stores character input */
	int c;	
	/* This array stores the number of occurences of each data type */
	int characters[NUMBER_OF_CHARACTERS];
	/* We set all values of this array to zero as no input has been
	given yet */
	for(int i = 0;i < NUMBER_OF_CHARACTERS;i++){
		characters[i] = 0;
	}
	/* This while loop takes user input and then analyzes the type of
	data it is. */
	while((c = getchar()) != EOF){
		if('0' <= c && c <= '9'){//If it's a number...
			characters[0]++;//We update the number of digits occuring
		}else if('a' <= c && c <= 'z'){//If it's a character...
			characters[1]++;//We update the number of chars occuring
		}else{//If it's neither...
			characters[2]++;//We update the "other" category
		}
	}
	/* This for loop prints out our horizontal historgram */
	for(int j = 0;j < NUMBER_OF_CHARACTERS;j++){//For every category
		printf("%d: ", j);//print the category name
		for(int k = 0;k < characters[j];k++){//for every element in cat
			printf("*");//print a star to represent said element
		}
		printf("\n");//print newline and start next category
	}
	return 0;
}