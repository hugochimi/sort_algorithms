#include <stdio.h>
#include <stdlib.h>

void selection(int *vet,int pos,int tamanho){
    int aux=pos,aux2=vet[pos];
    for(int i=pos;i<tamanho;i++){
        if(aux2>vet[i]){
            aux2=vet[i];
            aux=i;
        }
    }
    int auxzika = vet[pos];
    vet[pos]=aux2;
    vet[aux]=auxzika;
    if(pos+1<tamanho)
        selection(vet,pos+1,tamanho);
}

int main(){
    int i=0,tamanho;
    scanf("%d",&tamanho);
    int *vet=malloc(tamanho*sizeof(int));
    while(i<tamanho){
        scanf("%d",&vet[i]);
        i++;
    }
    selection(vet,0,tamanho);
    for(i=0;i<tamanho;i++){
        printf("%d ",vet[i]);
    }

}