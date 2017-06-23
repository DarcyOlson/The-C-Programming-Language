/* Here we are asked to write a program that prints a horizontal histogram of the lengths of words in its input*/

#include <stdio.h>

#define SMALL 5
#define MEDIUM 10
#define LARGE 15
#define CATEGORY_COUNT 4

int main(){
	/* c is a variable for storing input, while nchar is a variable
	for storing the number of characters in a given input. char_count
	is an array indicating the number of times a word in a particular
	range of word counts has appeared (e.g. the word "four" would be
	placed in the first index while the word "fourteen" would be placed
	in the second).*/
	int c, nchar;
	int char_count[CATEGORY_COUNT];
	/* This for loop initializes all array values to zero because we're
	just starting the program meaning no words have appeared. */
	for(int i = 0;i < CATEGORY_COUNT;i++){
		char_count[i] = 0;
	}
	/* This while loop takes the input and counts the characters inputed
	on each word. */
	while((c = getchar()) != EOF){
		//if we haven't given a blank space, we're on the same word
		if(c != ' '){
			nchar++;//so we update the character count of that word
		}else{//If we've been given a blank space...
			//We place it into its category using if statements
			if(nchar <= SMALL){
				char_count[0]++;
			}else if(nchar <= MEDIUM){
				char_count[1]++;
			}else if(nchar <= LARGE){
				char_count[2]++;
			}else{
				char_count[3]++;
			}
			nchar = 0;//we set nchar to zero to reflect a new word has started
		}
	}
	/* This for loop is used to print the horizontal histogram */
	for(int i = 0;i < CATEGORY_COUNT;i++){//for every word category
		for(int j = 0;j < char_count[i];j++){//for every occurence of that word category
			printf("*");//print a star to represent one occurence of that word category in the input
		}
		printf("\n");//once all its occurences have been marked, print a new line and advance to the next word category
	}

	return 0;
}