//Explica��o inicial:

#include <iostream>

using namespace std;

int main()
{
	//um vetor em c++ n�o � um vetor, � um ponteiro que vai indicar onde come�a
	//o nosso vetor
	int vetor[4];
	int *p;
	
	//exemplo:
	vetor[0] = 2;
	vetor[1] = 5;
	vetor[2] = -1;
	
	p = vetor; // vale a mesma coisa que o vetor (endere�o)
	
	//retorna um endere�o
    cout << vetor << endl;
    //retorna o valor armazenado no endere�o
    cout << *vetor << endl;
    //busca o valor presente no endere�o p
    cout << *p <<endl;
    
    //basicamente desloca uma variav�l/posi��o 
    p++;
	cout << *p <<endl; //mostra o valor na posi��o 1
	p++; 
	cout << *p <<endl; //mostra o valor na posi��o 2
	p++; 
	cout << *p <<endl; //mostra um "lixo", pois n�o foi colocado nada nesta posi��o
	
	return 0;
}