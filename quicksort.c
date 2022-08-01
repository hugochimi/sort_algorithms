#include <stdio.h>
#include <stdlib.h>

static int
	separa(int *v,int l, int r){
	int p=v[r];
	int i=l,j=l,auxe;
	while(i<r){
		if(v[i]<=p){
			auxe=v[i];
			v[i]=v[j];
			v[j]=auxe;
			j++;
		}
	i++;
	}
	auxe=v[j];
	v[j]=v[r];
	v[r]=auxe;
		
	return j;	
}

void quicksort(int *v,int l,int r){
	
	if(l<r){
		int p=separa(v,l,r);
		quicksort(v,l,p-1);
		quicksort(v,p+1,r);
	}
}

int main(){
	int *vet;
	int i=0,n,cont=2;
	vet=malloc(1 * sizeof(int));

	while(scanf("%d",&vet[i])!=EOF){
		vet=(int *)realloc(vet,cont * sizeof(int));
		i++;
		cont++;
	}
	n=cont-2;
	quicksort(vet,0,n-1);
	printf("%d",vet[0]);

	for(i=1;i<n;i++){
		printf(" %d",vet[i]);
	}
	printf("\n");

}