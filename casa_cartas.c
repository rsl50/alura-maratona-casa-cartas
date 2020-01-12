#include <stdio.h>
#include <stdlib.h>


int compare (int i, int j){
	// A fun��o de compara��o define como deve ser feita a ordena��o do vetor analisado
	// Como queremos ordenar os valores de acordo com o resto da divis�o por m, do maior pro menor, ent�o precisamos fazer a seguinte compara��o:
	return ((i%m) > (j%m) || ((i%m) == (j%m) && i > j));
	// Basicamente, assim definimos que para dois elementos da sequencia, i e j, sendo i um elemento que vem antes de j, deve valer que (i%m) seja maior que (j%m).
	// Se o valor que o vampirao recebera � o mesmo ((i%m) == (j%m)), ent�o o desempate da ordena��o se faz pela propina de maior valor,com a qual os deputados ganham mais
}

int main () { 
	
	int qtdOfertasPropina = 0;	
	int deputadosCorruptos = 0;	
	
	scanf("%d", &qtdOfertasPropina);
	scanf("%d", &deputadosCorruptos);
	
	int valoresPropinas[qtdOfertasPropina];
		
	int i = 0;
	for (i = 0; i < qtdOfertasPropina; i++) {
		scanf("%d", &valoresPropinas[i]);
	}
	
	qsort(valoresPropinas, qtdOfertasPropina, sizeof(int), compare);
	for (i = 0; i < qtdOfertasPropina; i++)printf("%d ", valoresPropinas[i]);
	printf("\n");
	
	
	

	return (0);
}
