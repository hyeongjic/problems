#include <stdio.h>
#define MAX_SIZE 10000
int main(void) {
	char str[MAX_SIZE];
	while(fgets(str,MAX_SIZE,stdin) != NULL)
		fputs(str,stdout);
	return 0;
}
 