#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int info;
	struct lista *prox;
} TLSE;

TLSE* TLSE_inicializa(void){
  return NULL;
}

TLSE* TLSE_insere(TLSE *l, int elem){
  TLSE *novo = (TLSE *) malloc(sizeof(TLSE));
  novo->prox = l;
  novo->info = elem;
  return novo;
}

void TLSE_imprime(TLSE *l){
  TLSE *p = l;
  while(p){
    printf("%d ", p->info);
    p = p->prox;
  } 
}

void TLSE_libera(TLSE *l){
  TLSE *p = l, *q;
  while(p){
    q = p;
    p = p->prox;
    free(q);
  } 
}

void inverte(TLSE *l){
	TLSE *aux = l;
	TLSE *aux2;
	while(aux->prox!=NULL){
		aux2 = aux;
		aux = aux->prox;
	}
	aux->prox = aux2;
	while(aux2!=l)
		
		while(aux!=aux)
			aux2 
	l->prox = NULL;
	TLSE_imprime(aux);		
}

int main(void){
	int num;
	TLSE *l = (TLSE*) malloc(sizeof(int));
	l = TLSE_inicializa();
	
	scanf("%d",&num);
	while(num){
		l = TLSE_insere(l,num);
		scanf("%d",&num);
	}
	
	printf("Normal: ");
	TLSE_imprime(l);
	printf("\n");
	
	printf("Invertida: ");
	inverte(l);
	printf("\n");
	
	TLSE_libera(l);

	return 0;
}
