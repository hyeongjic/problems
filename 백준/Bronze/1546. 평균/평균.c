#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,max=0,sum=0;
	scanf("%d",&a);
	for(int i= 0; i < a; i++)
	{
		scanf("%d ",&b);
		if(max <= b)
			max = b;
		sum += b;
	}
	printf("%.2lf",(double)sum/max*100/a);
	
	return 0;
}