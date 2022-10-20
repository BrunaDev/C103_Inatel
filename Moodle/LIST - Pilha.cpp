#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> pilha; //"ponteiro" para a pilha
	int x; //var aux
	
	list<int>::iterator p; //este é o ponteiro desta biblioteca
	
	for (int i =0; i<4; i++)
	{   cin>>x;
	    pilha.push_front(x); //empurra o valor de x para a pilha
	}
	
	//pilha.begin()-> inicialização || pilha.end() -> teste de parada || p++ -> incrementot
	for(p = pilha.begin(); p != pilha.end(); p++)
		cout << *p << endl;
	
	while(!fila.empty()) //serve para limpar a memória no final do código
		fila.pop_front();
	
	return 0;
}