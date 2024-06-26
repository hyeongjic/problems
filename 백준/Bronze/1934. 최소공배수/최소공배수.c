#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a,b,result,big;
	
	scanf("%d",&n);
	
	for(int i=0; i<n; i++)
	{
		scanf("%d %d",&a,&b);
		
		if(a>=b)
			big=a;
		else
			big=b;
		result = big;
		while(!(result % a ==0 && result % b ==0))
			result += big;
		
		printf("%d\n",result);
	}
	
	
	return 0;
}
