#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input;
	printf("input the second :");
	scanf("%i", &input);
	
	printf("The time for %i second is %i : %i : %i\n", input, input/3600, (input%3600)/60, input%60);
	
	return 0;
}
