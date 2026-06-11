#include "TARVB.h"

TARVB *maior(TARVB *a){
	if(!a) return a;
	if(a->folha) return a;
	return maior(a->filho[a->nchaves]);
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
	
	TARVB *res = maior(a);
	if(res && res->nchaves > 0){
	    printf("O maior valor da árvore é %d.\n", res->chave[res->nchaves-1]);
	} else {
	    printf("A árvore está vazia.\n");
	}
	
	TARVB_Libera(a);
}
