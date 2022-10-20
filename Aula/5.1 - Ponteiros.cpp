//Explicação inicial:

#include <iostream>

using namespace std;

int main()
{
	//um vetor em c++ não é um vetor, é um ponteiro que vai indicar onde começa
	//o nosso vetor
	int vetor[4];
	int *p;
	
	//exemplo:
	vetor[0] = 2;
	vetor[1] = 5;
	vetor[2] = -1;
	
	p = vetor; // vale a mesma coisa que o vetor (endereço)
	
	//retorna um endereço
    cout << vetor << endl;
    //retorna o valor armazenado no endereço
    cout << *vetor << endl;
    //busca o valor presente no endereço p
    cout << *p <<endl;
    
    //basicamente desloca uma variavél/posição 
    p++;
	cout << *p <<endl; //mostra o valor na posição 1
	p++; 
	cout << *p <<endl; //mostra o valor na posição 2
	p++; 
	cout << *p <<endl; //mostra um "lixo", pois não foi colocado nada nesta posição
	
	return 0;
}