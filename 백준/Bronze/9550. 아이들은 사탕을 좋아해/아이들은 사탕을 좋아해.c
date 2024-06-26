#include <stdio.h>

int main(void) {
	int num,n,k,candy,count=0;
	
	scanf("%d",&num);
	
	for(int i =0; i<num; i++)
	{
		scanf("%d %d",&n,&k);
		
		for(int m=0; m<n; m++) {
			scanf("%d",&candy);
			count += candy/k;
		}
		printf("%d\n",count);
		count =0;
	}
	
	return 0;
}
