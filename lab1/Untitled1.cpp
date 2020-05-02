int soma_primaria(int size, int matrix[][]){
	int count=0,result=0;
	while(count<size){
		result+=matrix[count][count];
		count++
	}
	return result;
}

int soma_secundaria(int size, int matrix[][]){
	int count=0,result=0;
	for(count=0,count<size,count++){
		result+=matrix[count][size-count];
	}
	return result;
}

int
