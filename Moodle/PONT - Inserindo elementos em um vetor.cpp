#include <iostream>

using namespace std;

int main()
{
	int *vetor = NULL; //armazena os dados
	int tam; //tamanho desejado do vetor
	int i;//contador
	int *p; //ponteiro para auxiliar na leitura

	//Inserir o tamanho desejado
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

	//Mostrar vetor
	p = vetor;
	for(i = 0; i < tam; i++)
	{
		cout << *p << " ";
		p++;
	}
	cout<<endl;
	
	//Liberar a memória usada
	delete [] vetor;
	
	return 0;
}
