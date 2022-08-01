#include <stdio.h>
#include <stdlib.h>

static int 						
	intercala(int *v,int l,int m, int r){
	int i=l,j=m, c=0;
	int *vaux = (int*)malloc((r-l)*sizeof(int));

	while(i<m && j<r){
		if(v[i]<=v[j])
			vaux[c++]=v[i++];
		else
			vaux[c++]=v[j++];
	}
	while(i<m){
		vaux[c++]=v[i++];
	}
	while(j<r){
		vaux[c++]=v[j++];
	}
	for(i=l;i<r;i++){
		v[i]=vaux[i-l];
	}
	free(vaux);
}

void mergesort(int *v,int l,int r){	
	if(l<r-1){
		int m=(r+l)/2;
		mergesort(v,l,m);
		mergesort(v,m,r);
		intercala(v,l,m,r);
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
	printf("n=%d\n",n);
	mergesort(vet,0,n);
	printf("%d",vet[0]);

	for(i=1;i<n;i++){
		printf(" %d",vet[i]);
	}
	printf("\n");

}