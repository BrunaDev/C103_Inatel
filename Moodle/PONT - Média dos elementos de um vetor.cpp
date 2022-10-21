#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
	int *vetor = NULL; //armazena os dados
	int tam; //tamanho desejado do vetor
	int i;//contador
	int *p; //ponteiro para auxiliar na leitura
	float soma = 0; //variav�l que armazena a soma
	float res; //variav�l que armazena a m�dia

	//Ler o tamanho desejado
	cin >> tam;

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
		soma = soma + *p;
		p++;
	}

	//Fazendo a m�dia e mostrando
	res = soma / tam;
	cout << fixed << setprecision(2) << res << endl;

	// Liberar a mem�ria usada
	delete [] vetor;

	return 0;
}