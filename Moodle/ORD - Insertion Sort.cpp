#include <iostream>
#include <iomanip>

using namespace std;

int insertionSort(int vetor[], int tam)
{
	int i,j; //contadores
	int trab;
	bool troca; //muda o estado para V ou F
	int limite; //guarda a ultima posição do vetor que terá verificação
	
	troca = true;
	limite = tam - 1;
	
	while(troca) //= verdadeiro
	{
		troca = false;
		for(i=0; i<limite; i++)
		{
			if(vetor[i] < vetor[i+1])//se posição anterior for menor que posterior, troca
			{
				trab = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = trab;
				j = i;
				troca = true;
			}
		}
		limite = j;
	}
}

int main()
{
	int N, tam; //variaveis
	int i = 0;//contador
	int vetor[100];//vetor
	
	//1 - Insira N valores inteiros em um vetor
	cin>>N;
	while(N!=0)
	{
		vetor[i]=N;
		i++;
		cin>>N;
	}
	tam=i;
	
	insertionSort(vetor, tam);//chama a função
	
    for(i=0; i<tam; i++)
	{
		cout<<vetor[i]<<" ";
	}
	
	return 0;
}