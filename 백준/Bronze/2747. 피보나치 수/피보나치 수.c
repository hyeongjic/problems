#include <stdio.h>

int main(void) {
	int num,n=0,n1=1,n2=1;
	scanf("%d",&num);
	for(int i =2; i<num; i++){
		n=n1;
		n1=n2;
		n2 = n+n1;
	}
	if(num==0)
		printf("%d",n);
	else if(num==1)
		printf("%d",n1);
	else
		printf("%d",n2);
	return 0;
}
