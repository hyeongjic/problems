#include <stdio.h>
#include <math.h>

int main(void) {
	int r;
	double pi = 3.14159265359;
	scanf("%d", &r);
	
	printf("%.6lf\n", (double)r*r*pi);
	printf("%.6lf",(double)2*r*r);

	return 0;
}