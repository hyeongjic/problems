#include <stdio.h>
 
int main(void) {
	int c,count=0;
	while((c=fgetc(stdin))!=EOF)
	{
		printf("%c",c);
		count++;
		if(count==10){
			printf("\n",c);
			count=0;
		}
	}
	return 0;
}