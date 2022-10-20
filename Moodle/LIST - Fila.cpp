//Na pilha a variavel é inserida no começo, na fila é no fim

#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> fila; //"ponteiro" para a pilha
	int x; //var aux
	
	list<int>::iterator p; //este é o ponteiro desta biblioteca
	
	for (int i =0; i<4; i++)
	{   cin>>x;
	    fila.push_back(x); //empurra o valor de x para a pilha
	}
	
	//pilha.begin()-> inicialização || pilha.end() -> teste de parada || p++ -> incrementot
	for(p = fila.begin(); p != fila.end(); p++)
		cout << *p << endl;
	
	while(!fila.empty()) //serve para limpar a memória no final do código
		fila.pop_front();
	
	return 0;
}