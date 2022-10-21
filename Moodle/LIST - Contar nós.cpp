#include <iostream>
#include <list>

using namespace std;

int contar(list<int> lista)
{
	int nos = 0; //armazena a quantidade de nós (contador)
	
	list<int>::iterator p; //este é o ponteiro desta biblioteca
		
	//pilha.begin()-> inicialização || pilha.end() -> teste de parada || p++ -> incremento
	for(p = lista.begin(); p != lista.end(); p++)
		nos++;
	
	return nos;
}

int main()
{
	list<int> lista; //"ponteiro" para a lista
	int N; //var aux
	
	cin >> N;
	while(N != 0)
	{   cin >> N;
	    lista.push_back(N); //empurra o valor de x para a pilha
	}
	
	cout << contar(lista) <<endl; //retorna a função contar como saída
	
	while(!lista.empty()) //serve para limpar a memória no final do código
		lista.pop_front();
	
	return 0;
}