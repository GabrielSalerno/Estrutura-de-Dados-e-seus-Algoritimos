#include <stdio.h>

int main(void){
	int N, n1, n2, maior, menor, aux;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d %d",&n1,&n2);
		if(n1>n2){
			maior = n1;
			menor = n2;
		}else{
			maior = n2;
			menor = n1;
		}
		do{
			aux = maior%menor;
			maior = menor;
			menor = aux;
		}while(aux!=0);
		printf("%d\n",maior);
	}

	return 0;
}
