#include <stdio.h>
#define MAX 500

int prim(int s, int M[][MAX]){
	int count=0,result=0;
	while(count<s){
		result += M[count][count];
		count++;
	}
	return result;
}

int sec(int size, int M[][MAX]){
	int count=0,result=0;
	size--;
	for(count=0;count<=size;count++){
		result+=M[count][size-count];
	}
	return result;
}

int coluna_par(int size, int M[][MAX]){
	int line,col,soma,result=0;
	for(col=0;col<size;col++){
		line=0;
		soma=0;
		for(line=0;line<size;line++){
			soma+=M[line][col];
		}
		if(soma%2 == 0){
			result++;
		}
	}
	return result;
}

int linha_impar(int size, int M[][MAX]){
	int line, col, soma, result = 0;
	for(line=0;col<size;line++){
		soma=0;
		col=0;
		for(col=0;line<size;col++){
			soma+=M[line][col];
		}
		if(soma%2 != 0){
			result++;
		}
	}
	return result;
}

int main() {
	int size, a, b, c, d, i, j;
	int M[MAX][MAX];
	printf("defina o tamanho de sua matriz quadrada: ");
	scanf("%d", &size);
	printf("\n entre os elementos de sua matriz um a um, linha a linha: \n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("\n");
			scanf("%d", &M[i][j]);
		}
	}
	printf("\n");
	a = prim(size,M);
	b = sec(size, M);
	c = coluna_par(size, M);
	d = linha_impar(size, M);
	printf("%d %d %d %d", a, b, c, d);
 	return 0;
}
