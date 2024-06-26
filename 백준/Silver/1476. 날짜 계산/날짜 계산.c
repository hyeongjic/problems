#include <stdio.h>

int main(void) {

	int e,s,m,year,earth,moon;
	
	scanf("%d %d %d",&e,&s,&m);
	
	year = s;
	
	while(year <= 15*28*19)
	{
		if((earth = year % 15) ==0)
			earth = 15;
			
		if((moon = year % 19) == 0)
			moon = 19;
			
		if(earth == e && moon == m) {
			printf("%d",year);
			break;
		}
		else 
			year += 28;
	}
	return 0;
}
