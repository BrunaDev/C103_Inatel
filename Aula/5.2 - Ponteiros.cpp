//Exemplo 01
#include <iostream>

using namespace std;

int main()
{
	int *vetor = NULL;
	int N; //tamanho desejado para o vetor
	int i; //contador
	
	cin >> N; //escolhendo o tamanho desejado para o vetor
	
	vetor = new int[N]; //alocando memória para o vetor
	
	for(i = 0; i < N; i++)
		vetor[i] = i + 1;
	
	for(i = 0; i < N; i++)
		cout << vetor[i] << endl;
	
	delete [] vetor;
	
	return 0;
}

//Exemplo 2
#include <iostream>

using namespace std;

struct dado
{
	int codigo;
	float preco;
};

int main()
{	
	dado *carro;
	
	carro = new dado; //alocando memoria
	
	carro->codigo = 221;
	carro->preco = 80000;
	
	cout<< "Codigo: "<< carro->codigo << endl;
	cout<< "Codigo: "<< carro->preco << endl;
	
	delete carro;

	return 0;
}