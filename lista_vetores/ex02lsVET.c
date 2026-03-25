#include <stdio.h>
#include <stdlib.h>

void derivada(int num, int expo){
	if(expo==0){
		printf("\n");
	} else if(expo-1==0){
		printf("%d",num); 
	} else{
		num *= expo;
		printf("%dx^%d + ",num,expo-1);
	}
}

void integral(int num, int expo){
	if(expo==0){
		printf("%dx\n",num);
	} else{
		if(num%(expo+1)==0){
			printf("x^%d + ",expo+1);
		} else{
			printf("(%dx^%d)/%d + ",num,expo+1,expo+1);
		}
	}
}

int main(void){
	int *l, g;
	scanf("%d",&g);
	while(g>0){
		l = (int *) malloc((g+1)*sizeof(int));
		for(int i=g+1;i>0;i--){
			scanf("%d", &l[i-1]);
		}
		
		printf("Função original:\n");
		for(int i=g+1;i>1;i--){
			printf("%dx^%d + ",l[i-1],i-1);
		}
		printf("%d",l[0]);
		printf("\n");
		
		printf("Derivada:\n");
		for(int i=g+1;i>0;i--){
			derivada(l[i-1],i-1);
		}
		
		printf("Integral:\n");
		for(int i=g+1;i>0;i--){
			integral(l[i-1],i-1);
		}
		
		scanf("%d",&g);
		free(l);
	}

	return 0;
}
