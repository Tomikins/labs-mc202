#include <stdio.h>
#define MAX 99

int main() {
	int size, i, j;
	int M[MAX][99];
	printf("defina o tamanho de sua matriz quadrada: ");
	scanf("%d", &size);
	printf("\n entre os elementos de sua matriz um a um, linha a linha: ");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d", &M[j][i]);
		}
	}		
	printf("\n");

 	return 0;
}
