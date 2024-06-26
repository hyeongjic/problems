#include <stdio.h>

int main(void) {
	int mon,day,all=0;
	scanf("%d %d",&mon,&day);
	for(int i = 1; i<=mon-1; i++)
	{
		all +=30;
		if(i == 1 || i==3 ||i==5 ||i==7 ||i==8 ||i==10|| i==12)
			all +=1;
		else if(i==2)
			all -=2;
	}
	all += day;
	switch(all%7)
	{
		case 0:
			printf("SUN");
			break;
		case 1:
			printf("MON");
			break;	
		case 2:
			printf("TUE");
			break;
		case 3:
			printf("WED");
			break;
		case 4:
			printf("THU");
			break;
		case 5:
			printf("FRI");
			break;
		case 6:
			printf("SAT");
			break;
	}
	return 0;
}
