#include <stdio.h>
 
int main(void) {
 
	int n,x,val;
	scanf("%d %d",&n,&x);
	for(int i=0; i <n; i++)
	{
		scanf("%d",&val);
		if(x > val)
			printf("%d ",val);
	}
 
	return 0;
}