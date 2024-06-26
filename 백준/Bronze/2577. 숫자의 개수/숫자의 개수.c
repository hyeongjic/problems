#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here
	int input[3], check[10], cal, temp,num,size;
	for (int k = 0; k<10; k++)
		check[k] = 0;
	for (int n = 0; n<3; n++)
		scanf("%d", &input[n]);
	cal = input[0] * input[1] * input[2];

	if (cal >= 100000000)
		num = 9;
	else if (cal >= 10000000 && cal < 100000000)
		num = 8;
	else
		num = 7;
	size = pow(10, num-1);
	for (int i=num; i > 0; i--)
	{
		if (i == num)
			temp = cal / size;
		else if (i == 1)
			temp = cal % 10;
		else
			temp = cal % (size * 10) / size;
		size /= 10;
		check[temp]++;
	}
	
	for (int m = 0; m <10; m++)
		printf("%d\n", check[m]);
		

	return 0;
}