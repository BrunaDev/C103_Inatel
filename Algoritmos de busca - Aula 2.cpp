#include <iostream>
#include <iomanip>

using namespace std;

int binaria(int vetor[],int tamanho, int x){
	bool achou; // var aux p/ busca
	int baixo, meio, alto; // var aux
	
	baixo = 0;//definindo valor
	alto = tamanho-1;//definindo valor
	achou = false;//definindo estado
	
	while ((baixo <= alto) && (achou == false)){ //faz a verificação das posições
		meio = (baixo + alto)/2;
		if(x < vetor[meio])
			alto = meio - 1;
		else 
           if(x > vetor[meio])
           	baixo = meio + 1;
           else
           	achou = true;
	}
	if(achou)
		return meio;
	else
		return -1;
}

int main()
{
	int N;//número de elementos inseridos
	int i; //contador
	int vetor[10];//armazena os dados
	int X;//elemento a ser procurado
	int pos;//posição em que X foi encontrado no vetor. -3 se não for encontrado.
	
	//1 - Leia N
	cin>>N;
	
	//2 - Insira N valores inteiros em um vetor
	for(i=0; i<N; i++)
		cin>>vetor[i];
	
	//3 - Leia X
	cin>>X;

	//4 - Procurar po X no vetor
	pos = binaria(vetor, N, X);
	
	//5 - Se X for encontrado no vetor, mostre a posição. 
	//	Caso contrário, diga que não encontrou.
	if(pos == -1)
	{
		cout<<X<<" nao encontrado"<<endl;
	}
	else{
		cout<<X<<" encontrado na posicao "<<pos<<endl;
	}
}