#include <stdio.h>
 
int main(void) {
 
	int count, value, top, sum = 0;
 
	scanf("%d", &count);
 
	scanf("%d", &value);
 
	top = value;
 
	sum = value;
 
 
	for (int i = 1; i < count; i++) {
 
		scanf("%d", &value);
 
		if (sum > 0 && sum + value < 0)
			sum = 0;
		else if (sum <= 0 && sum < value)
			sum = value;
		else
			sum += value;
 
		if (sum > top)
			top = sum;
 
	}
	printf("%d", top);
	return 0;
}