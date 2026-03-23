#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n,aux, cont=0, falso=0, i, *vet_orig, *vet_inv;
	
	scanf("%d",&n);
	while(n>0){
		aux = n;
		falso=0;
		cont=0;

		while(aux!=0){
			cont++;		
			aux/=10;
		}
		
		vet_orig = (int*)malloc(cont*sizeof(int));
		vet_inv = (int*)malloc(cont*sizeof(int));
		
		aux = n;
		i=cont;

		while(i>0){
			vet_orig[i-1] = aux%10;
			i--;
			aux/=10;
		}
		
		aux = n;
		i=0;

		while(i<cont){
			vet_inv[i] = aux%10;
			i++;
			aux/=10;
		}

		for(int j=0;j<cont;j++){
			printf("%d ",vet_orig[j]);
		}
		printf("\n");
		for(int j=0;j<cont;j++){
			printf("%d ",vet_inv[j]);
		}
		printf("\n");

		for(int j=0;j<cont;j++){
			if(vet_orig[j]!=vet_inv[j]){
				falso++;
				break;
			}
		}

		if(falso)
			printf("FALSO\n");
		else
			printf("VERDADEIRO\n");

		scanf("%d",&n);

		free(vet_orig);
		free(vet_inv);
	}
		

	return 0;
}
