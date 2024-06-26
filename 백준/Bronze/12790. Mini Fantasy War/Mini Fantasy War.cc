#include <stdio.h>
 
int main(void) {
	// your code goes here
	int n,hp,mp,att,def,ehp,emp,eatt,edef;
 
	scanf("%d",&n);
 
	for(int i=0; i < n; i++)
	{
		scanf("%d %d %d %d %d %d %d %d",&hp,&mp,&att,&def,&ehp,&emp,&eatt,&edef);
 
		if((hp +=ehp) < 1)
			hp= 1;
		if((mp+=emp) < 1)
			mp=1;
		if((att+=eatt)<0)
			att=0;
		def += edef;
 
		printf("%d\n",hp*1+5*mp+2*att+2*def);
 
	}
 
 
	return 0;
}