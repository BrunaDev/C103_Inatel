#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> pilha; //"ponteiro" para a pilha
	int x; //var aux
	
	list<int>::iterator p; //este � o ponteiro desta biblioteca
	
	for (int i =0; i<4; i++)
	{   cin>>x;
	    pilha.push_front(x); //empurra o valor de x para a pilha
	}
	
	//pilha.begin()-> inicializa��o || pilha.end() -> teste de parada || p++ -> incrementot
	for(p = pilha.begin(); p != pilha.end(); p++)
		cout << *p << endl;
	
	while(!fila.empty()) //serve para limpar a mem�ria no final do c�digo
		fila.pop_front();
	
	return 0;
}