#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,min,max,res;
	
	scanf("%d %d",&a,&b);
	
	if(a>=b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	
	for(int i=min; i >=1; i--)
	{
		if(a%i ==0 && b%i==0) {
			printf("%d\n",i);
			break;
		}
	}
	
	res = max;
	
	while(!(res % a == 0 && res % b == 0))
		res += max;
	printf("%d",res);
	
	return 0;
}
