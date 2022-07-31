#include <stdio.h>
#include <stdlib.h>

void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = 0; k < n - 1; k++) {
        //printf("\n[%d] ", k);

        for (j = 0; j < n - k - 1; j++) {
            //printf("%d, ", j);

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
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
    bubble_sort(vet,tamanho);
    for(i=0;i<tamanho;i++){
        printf("%d ",vet[i]);
    }

}
