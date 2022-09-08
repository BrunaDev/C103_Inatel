#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void quickSort(int vetor[], int tamanho, int i, int j)
{
	int trab,esq,dir,pivo;
	esq = i;
	dir = j;
	pivo = vetor[(int)round((esq + dir)/2.0)];
	
	do
	{
		while(vetor[esq] < pivo)
			esq++;
		while(vetor[dir] > pivo)
			dir--;
		if(esq <= dir)
		{
			trab = vetor[esq];
			vetor[esq] = vetor[dir];
			vetor[dir] = trab;
			esq++;
			dir--;
		}
	}while(esq <= dir);
	
	if(dir-i >= 0)
		quickSort(vetor,tamanho,i,dir);
	if(j-esq >= 0)
		quickSort(vetor,tamanho,esq,j);
}