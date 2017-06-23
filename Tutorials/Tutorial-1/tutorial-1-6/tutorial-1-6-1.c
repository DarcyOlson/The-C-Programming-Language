#include <stdio.h>

/* A program from the C Programming Language to count digits, white
space and others. Comments are my own understanding of how the
program works.*/

int main(){
	/* variables for holding input, indexing digit array, counting
	white space and counting other characters respectively */
	int c, i, nwhite, nother;
	/* An array to represent the decimal digits 0-9 */
	int ndigit[10];
	/* As we're just starting the program, the white space and other
	characters are all set to zero in the next line */
	nwhite = nother = 0;
	/* All digits are set to zero here to reflect the idea that we're
	just starting out (i.e. there are zero digits) */
	for(i = 0; i < 10; i++){
		ndigit[i] = 0;
	}
	/* This loop functions as a way to take and count the various
	inputs we recieve */
	while((c = getchar()) != EOF){
		if(c >= '0' && c <= '9'){//if c is a digit
			++ndigit[c-'0'];//increase the position of that digit by one
		}else if(c == ' ' || c == '\n' || c == '\t'){//if c is blank
			++nwhite;//increase blank space count by one
		}else{//if it isn't blank or a digit
			++nother;//increase other space by one
		}
	}
	/* The next print statement and for loop will print out how many
	times each digit appears */
	printf("digits = ");
	for(i = 0; i < 10; ++i){
		printf("%d", ndigit[i]);
	}
	/* This print statement shows how much white space and other
	space we have counted in this program */
	printf(", white space = %d, other = %d\n",nwhite,nother);
	return 0;
}