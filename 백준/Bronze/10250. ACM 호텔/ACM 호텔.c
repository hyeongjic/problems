#include <stdio.h>

int main(void) {
	// your code goes here
	int h,w,n,guest,rh=0,rw=1;
	scanf("%d",&n);
	
	for(int i=0; i<n; i++)
	{
		scanf("%d %d %d",&h,&w,&guest);
		
		while(h*rw < guest)
		{
			rw++;
		}
		rh += guest - h*(rw-1);
		if(rh==0)
			rh=h;
		printf("%d%02d\n",rh,rw);
		rh=0;
		rw=0;
	}
	
	return 0;
}
