#include <stdio.h>

int main(void){
	int h1,m1,h2,m2,h1_m1,h2_m2,dif;
	scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
	while((h1!=0 || m1!=0) && (h2!=0 || m2!=0)){
		h1*=60;
		h1_m1 = h1+m1;
		h2*=60;
		h2_m2=h2+m2;
		dif = h2_m2-h1_m1;
		if(dif<0)
			dif += 1440;
		printf("%d\n",dif);
		
		scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
	}

	return 0;
}
