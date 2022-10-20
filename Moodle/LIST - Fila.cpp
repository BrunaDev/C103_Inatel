//Na pilha a variavel � inserida no come�o, na fila � no fim

#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> fila; //"ponteiro" para a pilha
	int x; //var aux
	
	list<int>::iterator p; //este � o ponteiro desta biblioteca
	
	for (int i =0; i<4; i++)
	{   cin>>x;
	    fila.push_back(x); //empurra o valor de x para a pilha
	}
	
	//pilha.begin()-> inicializa��o || pilha.end() -> teste de parada || p++ -> incrementot
	for(p = fila.begin(); p != fila.end(); p++)
		cout << *p << endl;
	
	while(!fila.empty()) //serve para limpar a mem�ria no final do c�digo
		fila.pop_front();
	
	return 0;
}