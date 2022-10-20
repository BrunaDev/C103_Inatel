#include <iostream>
#include <iomanip>

using namespace std;

int bubbleSort(int vetor[], int tam)
{
	int i,j; //contadores
	int k=0; //contador do true
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
			if(vetor[i] > vetor[i+1])//se posição anterior for maior que posterior, troca
			{
				trab = vetor[i];
				
				cout<<"New trab:"<<trab<<endl;
				
				vetor[i] = vetor[i+1];
				vetor[i+1] = trab;
				j = i;
				
				troca = true;
				k++;//contador da troca
			}
		}
		limite = j;
	}
	cout<<"Contador:"<<k<<endl;
}

int main()
{
	int N; //variaveis
	int i = 0;//contador
	int vetor[100];//vetor
	
	//Entra com N valores inteiros em um vetor
	cin>>N;
	
	for(i=0; i<N; i++)
	{
		cin>>vetor[i];
	}
	
	bubbleSort(vetor, N);//chama a função
	
	return 0;
}