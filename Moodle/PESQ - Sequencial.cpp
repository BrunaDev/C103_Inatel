#include <iostream>
#include <iomanip>

using namespace std;

int binaria(int vetor[],int tam, int x){
	
	int pos = -1;//define a posição como -1
	
	for(int i=0; i<tam; i++)
	{
		if(vetor[i]==x)
		{
			pos = i;
			break;//o break faz com que o programa pare no primeiro numero igual ao X. Sem ele, mostra o ultimo (caso haja repetição).
		}
	}
	
	return pos;
}

int main()
{
	int i = 0; //contador
	int vetor[100];//armazena os dados
	int X;//elemento a ser procurado
	int pos;//posição em que X foi encontrado no vetor. -3 se não for encontrado.
	int tam;//tamanho do vetor
	int N;//valores que entrarão no vetor
	
	//1 - Insira N valores inteiros em um vetor
	cin>>N;
	while(N!=-1)
	{
		vetor[i]=N;
		i++;
		cin>>N;
	}
	tam=i;
	
	//2 - Leia X
	cin>>X;

	//3 - Procurar po X no vetor
	pos = binaria(vetor, tam, X);
	
	//4 - Se X for encontrado no vetor, mostre a posição. 
	//	Caso contrário, diga que não encontrou.
	if(pos == -1)
	{
		cout<<X<<" nao encontrado"<<endl;
	}
	else{
		cout<<X<<" encontrado na posicao "<<pos<<endl;
	}
}