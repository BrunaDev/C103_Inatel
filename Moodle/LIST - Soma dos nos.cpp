#include <iostream>
#include <list>

using namespace std;

int soma(list<int> lista)
{
	int soma = 0;
	
	list<int>::iterator p; //este ? o ponteiro desta biblioteca
		
	//pilha.begin()-> inicializa??o || pilha.end() -> teste de parada || p++ -> incremento
	for(p = lista.begin(); p != lista.end(); p++)
		soma = soma + *p;
	
	return soma;
}

int main()
{
	list<int> lista; //"ponteiro" para a lista
	int N; //var aux
	
	while(N != 0)
	{   cin >> N;
	    lista.push_back(N); //empurra o valor de x para a pilha
	}
	
	cout << soma(lista) <<endl;
	
	while(!lista.empty()) //serve para limpar a mem?ria no final do c?digo
		lista.pop_front();
	
	return 0;
}