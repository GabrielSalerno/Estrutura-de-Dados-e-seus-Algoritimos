#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n, *l, j=0,c=0,aux, a=0, cont;
	scanf("%d",&n);
	l = (int *) malloc(n*sizeof(int));
	for(int i=2;i<=n;i++){
		l[j]=i;
		j++;
	}
	
	while(l[c]){
		aux=c;
		while(l[c]){
			cont++;
			a++;
		}
	
		c++
	}
	
	for(int i=0;i<n-1;i++){
		printf("%d ",l[i]);
	}
	printf("\n");
	
	free(l);

	return 0;
}
