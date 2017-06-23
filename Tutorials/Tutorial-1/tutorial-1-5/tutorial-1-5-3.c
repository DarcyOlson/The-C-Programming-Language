#include <stdio.h>
/* We are asked to solve three problems
	1) Write a program to count blanks, tabs and newlines
	2) Write a program to copy its input to its output, replacing each
	string of one or more blanks by a single blank
	3) Write a program to copy its input to its output, replacing each
	tab by \t, each backspace by \b and each backslash with \.
 */
int main(){
	/*
	int c, nl;
	nl = 0;
	while((c = getchar()) != EOF){
		if(c == '\n'){
			nl++;
		}
	}
	printf("%d \n",nl);*/
	/* This code solves problem 1 */
	/*
	int c, blanks = 0, tabs = 0, new_lines = 0;
	while((c = getchar()) != EOF){
		if(c == ' '){
			blanks++;
		}
		if(c == '\t'){
			tabs++;
		}
		if(c == '\n'){
			new_lines++;
		}
	}
	printf("blanks: %d\n tabs: %d\n newlines: %d\n", blanks, tabs, new_lines);
	*/
	/* This code solves problem 2 */
	/*
	int c, is_blank = 0;
	while((c = getchar()) != EOF){
		if(c == ' ' && is_blank != 1){
			putchar(c);
			is_blank = 1;
		}
		if(c != ' '){
			putchar(c);
			is_blank = 0;
		}
	}
	*/
	/* This code works on the third problem and remains in progress*/
	int c, special_case = 0;
	while((c = getchar()) != EOF){
		if(c == '\t'){
			putchar('\\');
			putchar('t');
			special_case = 1;
		}
		if(c == '\b'){
			putchar('\\');
			putchar('b');
			special_case = 1;
		}
		if(c == '\\'){
			putchar('\\');
			putchar('\\');
			special_case = 1;
		}
		if(special_case == 0){
			putchar(c);
		}
		special_case = 0;
	}
	return 0;
}