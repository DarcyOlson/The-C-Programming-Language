#include <stdio.h>

#define IN 1
#define OUT 0

/* Very elementary version of word count */

/* We are asked to write a program that prints its input one word 
per line */

int main(){
	/* variables for storing the character, number of lines, number
	of words, number of characters and a binary variable on whether
	we've started a new word or not*/
	/*
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	while((c = getchar()) != EOF){
		++nc;
		if(c == '\n'){//If we detect a new line, a new line has started
			++nl;//so we count this new line by incrementing nl
		}
		if(c == ' ' || c == '\n' || c == '\t'){//A space/newline/tab
			state = OUT;//We indicate this word has ended
		}else if(state == OUT){//When we've ended an old word
			state = IN;//We begin a new one
			++nw;//We update our new word count to reflect this
		}
	}
	printf("%d %d %d\n", nl, nw, nc);*/
	/* This code answers the question posed */
	int c;
	while((c = getchar()) != EOF){
		putchar(c);
		putchar('\n');
	}
	return 0;
}