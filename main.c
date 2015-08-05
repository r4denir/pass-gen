#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int i;
	int num;
	char c;

	srand(time(NULL));

	printf("Length of your password: \n");
	scanf("%d", &num);

	if(num <= 0) printf("Please type in a number greater than 0!");

	for(i=0; i<num; i++) {
		c = (char) (rand() % 93);
		printf("%c", c + 33);
	}

	printf("\n");
	return 0;
}
