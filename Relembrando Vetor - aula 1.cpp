//---------------- Minha solu��o:
/**/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese"); //permite que a sa�da da escrita seja em portugu�s
	
	int n, X;
	int pos = -1;
	
	cout<<"Quantos valores o vetor ter�? ";
	cin>>n;
	
	int vet[n];
	
	cout<<"Insira os valores do vetor:"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>vet[i];
	}
	
	cout<<"Insira um valor para procur�-lo: ";
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
		cout<<"A posi��o do valor no vetor �: "<<pos;
	}
	else if(pos < 0 )
	{
		cout<<"N�o foi encontrado este valor!";
	}
	
	return 0;
}

//---------------- Solu��o do professor:
/**/
#include <iostream>
#include <iomanip>

using namespace std;

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
	pos = -3;//define a posi��o como -3
	for(i=0; i<N; i++)
	{
		if(vetor[i]==X)
		{
			pos = i;
			break;//o break faz com que o programa pare no primeiro numero igual ao X. Sem ele, mostra o ultimo (caso haja repeti��o).
		}
	}
	
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


























