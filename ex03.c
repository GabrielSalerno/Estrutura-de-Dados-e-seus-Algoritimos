#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a, b, *vet_a, *vet_b, valor,falso=0;
	vet_a = (int*) malloc(8*sizeof(int));
	vet_b = (int*) malloc(8*sizeof(int));
		
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d | %d\n",a,b);
	
	while(a!=0){
		valor = a%10;
		vet_a[valor-1]++;
		a/=10;
	}
	while(b!=0){
		valor = b%10;
		vet_b[valor-1]++;
		b/=10;
	}
	
	for(int i=1;i<9;i++){
		printf("%d:%d|",i,vet_a[i-1]);
	}
	printf("9:%d\n",vet_a[8]);
	for(int i=1;i<9;i++){
		printf("%d:%d|",i,vet_b[i-1]);
	}
	printf("9:%d\n",vet_b[8]);
	
	for(int i=0;i<9;i++){
		if(vet_a[i]!=vet_b[i]){
			falso++;
			break;
		}
	}
	if(falso)
		printf("FALSO\n");
	else
		printf("VERDADEIRO\n");
	
	free(vet_a);
	free(vet_b);

	return 0;
}
