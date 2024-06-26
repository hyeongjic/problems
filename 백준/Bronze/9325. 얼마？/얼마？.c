#include <stdio.h>
 
int main(void) {
 
	int n,total,opt,num,price;
 
	scanf("%d",&n);
 
	for(int i=0; i<n; i++)
	{
		scanf("%d",&total);
 
		scanf("%d",&opt);
 
		for(int k=0; k<opt; k++)
		{
			scanf("%d %d",&num,&price);
			total += num*price;
		}
		printf("%d\n",total);
	}
 
 
	return 0;
}