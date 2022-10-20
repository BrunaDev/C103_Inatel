#include <iostream>
#include <list>

using namespace std;

int soma(list<int> lista)
{
	int soma;
	
	list<int>::iterator p; //este é o ponteiro desta biblioteca
		
	//pilha.begin()-> inicialização || pilha.end() -> teste de parada || p++ -> incremento
	for(p = lista.begin(); p != lista.end(); p++)
		soma += *p;
	
	return soma;
}

int main()
{
	list<int> lista; //"ponteiro" para a lista
	int N; //var aux
	
	cin>>N;
	while(N!=0)
	{   cin>>N;
	    lista.push_back(N); //empurra o valor de x para a pilha
	}

	cout << soma(lista);
	
	while(!lista.empty()) //serve para limpar a memória no final do código
		lista.pop_front();
	
	return 0;
}