#include<stdio.h>
#include<stdlib.h>

main(){

	int vetor[10], i;
	
	for(i = 0; i < 10; i++){
		vetor[i] = (i + 5 * i)%(i + 1);
		printf("\n%d", vetor[i]);
	}


}
