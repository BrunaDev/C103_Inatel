#include <iostream>

using namespace std;

int main()
{
	int *vetor = NULL; //armazena os dados
	int tam; //tamanho desejado do vetor
	int i;//contador
	int *p; //ponteiro para auxiliar na leitura
	int soma=0; //variavel que ajudar na comparação

	//Inserir o tamanho desejado
	cin >>  tam;

	//Alocar memoria para o vetor
	vetor = new int [tam];

	//Prencher o vetor
	p = vetor;
	for(i = 0; i < tam; i++)
	{
		cin >> *p;
		p++;
	}

	//Varrendo o vetor
	p = vetor;
	for(i = 0; i < tam; i++)
	{
		if((*p > 0) && (*p % 2 == 0))
		{
			soma++;
		}
		p++;
	}

	//Mostrando o total de par e positivo
	cout << soma << endl;

	// Liberar a memória usada
	delete [] vetor;

	return 0;
}