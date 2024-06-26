#include <stdio.h>

int main(void) {
	// your code goes here
	int n,count=0;;
	scanf("%d",&n);
	
	for(int i =1; i<=n; i++)
	{
		if(i<100)
			count++;
		else
		{
			if( (i/100-i%100/10) ==(i%100/10-i%10))
				count++;
		}
		
	}
	printf("%d",count);
	return 0;
}
