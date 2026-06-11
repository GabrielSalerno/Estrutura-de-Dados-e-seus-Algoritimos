#include "TARVB.h"

TARVB *menor(TARVB *a){
	if(!a)return a;
	if(a->folha)return a;
	return menor(a->filho[0]);
}

int main(void){
	TARVB *a;
	int t,no;
	
	printf("Digite valor de t: ");
	scanf("%d",&t);
	a = TARVB_Cria(t);
	printf("Digite o valor do no: ");
	scanf("%d",&no);
	while(no){
		a = TARVB_Insere(a,no,t);
		printf("Digite o valor do no: ");
		scanf("%d",&no);
	}
	TARVB_Imprime2(a);
	
	TARVB *res = menor(a);
	if(res && res->nchaves > 0){
	    printf("O menor valor da árvore é %d.\n", res->chave[0]);
	} else {
	    printf("A árvore está vazia.\n");
	}
	
	TARVB_Libera(a);
}
