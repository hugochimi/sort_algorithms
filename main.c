#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "compara.h"

int main(){
	FILE *fp;
	char nome_arquivo[] = "comparacao.csv";
	fp = fopen(nome_arquivo, "w+");
	fprintf(fp, "Itens, Merge, Quick, Selection, Insertion, Bolha\n");

	for(int i = 100; i <= 50000; i=i+100){
		int vet[i],aux[i]; 
		double vet2[6];
		vet2[0]=i;
		for(int x = 0; x < i; x++){
			vet[x] = rand() % 50000;
		}
        for(int y =0;y<i;y++){
            aux[y]=vet[y];
        }
		clock_t t;
		
		t = clock();
		mergesort(aux,0,(i-1));
		t = clock()-t;
		vet2[1] = ((double)t/CLOCKS_PER_SEC);

        for(int y =0;y<i;y++){
            aux[y]=vet[y];
        }

		t = clock();
		quicksort(aux,0,(i-1));
		t = clock()-t;
		vet2[2] = ((double)t/CLOCKS_PER_SEC);

        for(int y =0;y<i;y++){
            aux[y]=vet[y];
        }

		t = clock();
		selection(aux,0,i);
		t = clock()-t;
		vet2[3] = ((double)t/CLOCKS_PER_SEC);

        for(int y =0;y<i;y++){
            aux[y]=vet[y];
        }

		t = clock();
		insertion_sort(aux,i);
		t = clock()-t;
		vet2[4] = ((double)t/CLOCKS_PER_SEC);

        for(int y =0;y<i;y++){
            aux[y]=vet[y];
        }

		t = clock();
		bubble_sort(aux,i);
		t = clock()-t;
		vet2[5] = ((double)t/CLOCKS_PER_SEC);

		fprintf(fp, "%.0f, %lf, %lf, %lf, %lf, %lf\n", vet2[0],vet2[1],vet2[2],vet2[3],vet2[4],vet2[5]);
        printf("%.0f, %lf, %lf, %lf, %lf, %lf\n", vet2[0],vet2[1],vet2[2],vet2[3],vet2[4],vet2[5]);


	}
	fclose(fp);
}