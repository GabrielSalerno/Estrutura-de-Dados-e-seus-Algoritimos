#include <stdio.h>

int main(void){
	int n, c=0,i=1,n_primo=0;
	scanf("%d", &n);
	
	while(n>0){
		while(n_primo<n){
			for(int j=1;j<i;j++){
				if(i%j==0){
					c++;
				}
			}
			if(c==1){
				printf("%d ",i);
				n_primo++;
			}
			c=0;
			i++;
		}
		printf("\n");
		n_primo=0;
		i=0;
		scanf("%d", &n);
	}
	
	return 0;
}
