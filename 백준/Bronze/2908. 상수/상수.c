#include <stdio.h>

int main(void) {
	// your code goes here
	int a[3], b[3];

	scanf("%1d%1d%1d %1d%1d%1d", &a[0], &a[1], &a[2], &b[0], &b[1], &b[2]);

	if ((a[2] * 100 + a[1] * 10 + a[0]) > (b[2] * 100 + b[1] * 10 + b[0]))
		printf("%d", (a[2] * 100 + a[1] * 10 + a[0]));
	else
		printf("%d", (b[2] * 100 + b[1] * 10 + b[0]));

	return 0;
}
