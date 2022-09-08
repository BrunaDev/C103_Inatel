//---------------- Minha solução:
/**/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese"); //permite que a saída da escrita seja em português
	
	int n, X;
	int pos = -1;
	
	cout<<"Quantos valores o vetor terá? ";
	cin>>n;
	
	int vet[n];
	
	cout<<"Insira os valores do vetor:"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>vet[i];
	}
	
	cout<<"Insira um valor para procurá-lo: ";
	cin>>X;
	
	for(int i=0; i<n; i++)
	{
		if(vet[i] == X)
		{
			pos = i;
		}
	}
	
	if(pos >= 0 )
	{
		cout<<"A posição do valor no vetor é: "<<pos;
	}
	else if(pos < 0 )
	{
		cout<<"Não foi encontrado este valor!";
	}
	
	return 0;
}

//---------------- Solução do professor:
/**/
#include <iostream>
#include <iomanip>

using namespace std;

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
	pos = -3;//define a posição como -3
	for(i=0; i<N; i++)
	{
		if(vetor[i]==X)
		{
			pos = i;
			break;//o break faz com que o programa pare no primeiro numero igual ao X. Sem ele, mostra o ultimo (caso haja repetição).
		}
	}
	
	//5 - Se X for encontrado no vetor, mostre a posição. 
	//	Caso contrário, diga que não encontrou.
	if(pos == -3)
	{
		cout<<"Nao encontrado"<<endl;
	}
	else{
		cout<<pos<<endl;
	}
}	


























