#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1000000

int main(void) {
	char str[MAX_SIZE];
	int count = 0, i = 0;

	fgets(str, MAX_SIZE, stdin);
	while (str[i] != NULL)
	{
		if (str[i] == '\n')
			break;
			
		if (str[i] <= 67)
			count += 3;
		else if (str[i] <= 70)
			count += 4;
		else if (str[i] <= 73)
			count += 5;
		else if (str[i] <= 76)
			count += 6;
		else if (str[i] <= 79)
			count += 7;
		else if (str[i] <= 83)
			count += 8;
		else if (str[i] <= 86)
			count += 9;
		else if (str[i] <= 90)
			count += 10;
		i++;
	}

	printf("%d", count);

	return 0;
}
