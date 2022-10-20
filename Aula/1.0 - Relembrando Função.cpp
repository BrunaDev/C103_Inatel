//---------------- Solu��o do professor:
#include <iostream>
#include <iomanip>

using namespace std;

int sequencial(int vetor[], int N, int X)
{
	int pos = -3;//define a posi��o como -3
	
	for(int i=0; i<N; i++)
	{
		if(vetor[i]==X)
		{
			pos = i;
			break;//o break faz com que o programa pare no primeiro numero igual ao X. Sem ele, mostra o ultimo (caso haja repeti��o).
		}
	}
	
	return pos;
}

int main()
{
	int N;//n�mero de elementos inseridos
	int i; //contador
	int vetor[10];//armazena os dados
	int X;//elemento a ser procurado
	int pos;//posi��o em que X foi encontrado no vetor. -3 se n�o for encontrado.
	
	//1 - Leia N
	cin>>N;
	
	//2 - Insira N valores inteiros em um vetor
	for(i=0; i<N; i++)
		cin>>vetor[i];
	
	//3 - Leia X
	cin>>X;

	//4 - Procurar po X no vetor
	pos = sequencial(vetor, N, X);
	
	//5 - Se X for encontrado no vetor, mostre a posi��o. 
	//	Caso contr�rio, diga que n�o encontrou.
	if(pos == -3)
	{
		cout<<"Nao encontrado"<<endl;
	}
	else{
		cout<<pos<<endl;
	}
}