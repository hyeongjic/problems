#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,first,second,target=-1,count=0;
	scanf("%d",&a);
	b = a;
	while(a!=target)
	{
		first = b % 10;
		second = (b/10 + b%10)%10;
		target = first*10+second;
		b= target;
		count++;
	}
	printf("%d",count);
	return 0;
}
