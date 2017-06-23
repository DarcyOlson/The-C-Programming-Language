#include <stdio.h>

/* Here we answer the questions:
	1) Verify that getchar() != EOF is 0 or 1
	2) Write a program to print the value of EOF
 */

int main(){
	int c;
	//The next two lines solve problem 1
	/*c = (getchar() != EOF);
	printf("%d \n",c);*/
	//This next line prints out the EOF character
	/*printf("%d \n",EOF);*/
	while((c = getchar()) != EOF){
		putchar(c);
	}
	return 0;
}