#include <stdlib.h>
#include <stdio.h>

int consulta_casos(int *vetor,int min,int max){
	int count = 0, i;
	for(i = 0; i <= (max-min); i++){
		count += vetor[min+i];
	}
	return count;
}

void realocar(int *vetor,int i,int f){
	vetor = realloc(vetor, (f+1)*sizeof(int));
	while(i <= f){
		vetor[i+1] = 0;
		i++;
	}
}

int main() {
	int *casos;
	int vsize = 5, s = 1, idade_max, idade_min, idade, qtd, op;
	casos = calloc(5, sizeof(int));
	if (casos == NULL){
		exit(1);
	}
	scanf("%d", &op);
	while(op > 0){
		//printf("op = %d\n", op);
		//printf("0. consultar\n1. inserir dados\n");
		scanf("%d", &s);
		if (s == 1){
			//printf("entre o intervalo de idades");
			scanf("%d %d", &idade_min, &idade_max);
			if(idade_max > vsize){
				idade_max = vsize;
			}
			printf("%d", consulta_casos(casos, idade_min, idade_max));
			printf("\n");
		} 
		else if (s == 0){
			//printf("entre idade e quantidade");
			scanf("%d %d", &qtd, &idade);
			if (idade > vsize) {
				realocar(casos, vsize, idade);
				vsize = idade;
			}				
			casos[idade] += qtd;
		}
		op--;
	}
	return 0;
}
