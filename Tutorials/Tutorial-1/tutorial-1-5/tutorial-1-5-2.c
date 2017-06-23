#include <stdio.h>

/* count characters in input */

int main(){
	long nc;

	nc = 0;
	printf("%ld\n", nc);
	while(getchar() != EOF){
		nc = nc + 1;
		printf("%ld\n", nc);
	}
	printf("%ld\n",nc);
}