#include "TARVB.h"

void aux(TARVB *a,int elem,int *menorSuc, int *c){
	if(!a) return;	
	
	for(int i=0;i<a->nchaves;i++){
		if(a->chave[i]>elem && (*c)==1){
			(*menorSuc) = a->chave[i];
			(*c)++;
		}else if(a->chave[i]>elem && a->chave[i]<(*menorSuc)){
			(*menorSuc) = a->chave[i];
		}
	}
	
	for(int j=0;j<a->nchaves+1;j++){
		aux(a->filho[j],elem,menorSuc,c);
	}
}

int suc(TARVB *a,int elem){
	if(!a) return 0;
	int menorSuc, c=1;

	aux(a,elem,&menorSuc,&c);
	
	return menorSuc;
}


int main(void){
	TARVB *a;
	int elem, t, no;
	
	printf("Valor de t: ");
	scanf("%d",&t);
	a = TARVB_Cria(t);
	printf("No a ser inserido: ");
	scanf("%d",&no);
	while(no){
		a = TARVB_Insere(a,no,t);
		printf("No a ser inserido: ");
		scanf("%d",&no);
	}
	
	TARVB_Imprime2(a);
	
	printf("Digite o valor que deseja encontrar o sucessor: ");
	scanf("%d",&elem);
	int resp = suc(a,elem);
	
	printf("Sucessor de %d é %d\n",elem,resp);
	
	TARVB_Libera(a);
}
