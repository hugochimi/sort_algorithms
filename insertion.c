#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int vetor[], int tamanhoVetor) {

int escolhido, j, i;

    for (int i = 1; i < tamanhoVetor; i++) {
		escolhido = vetor[i];
		j = i - 1;
		
		while ((j >= 0) && (vetor[j] > escolhido)) {
			vetor[j + 1] = vetor[j];
			j--;
		}
		
		vetor[j + 1] = escolhido;
	}
}

int main(){
    int i=0,tamanho;
    scanf("%d",&tamanho);
    int *vet=malloc(tamanho*sizeof(int));
    while(i<tamanho){
        scanf("%d",&vet[i]);
        i++;
    }
    insertion_sort(vet,tamanho);
    for(i=0;i<tamanho;i++){
        printf("%d ",vet[i]);
    }

}