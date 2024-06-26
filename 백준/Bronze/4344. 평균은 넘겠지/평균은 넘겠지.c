#include <stdio.h>
 
int main(void) {
 
	int a,b,c[1000],sum,count;
	scanf("%d",&a);
	for(int i = 0; i< a; i++) {
		count=0;
		sum=0;
		scanf("%d",&b);
		for(int k =0; k<b; k++){
			scanf("%d",&c[k]);
			sum += c[k];
		}
		sum /= b;
		for(int k=0; k<b; k++){
			if(c[k] > sum)
				count++;
		}
		printf("%.3lf%%\n",(double)count/b*100);
	}
	return 0;
}