//Na pilha a variavel � inserida no come�o, na fila � no fim

#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> fila; //"ponteiro" para a pilha
	int x; //var aux
	int soma = 0;
	
	list<int>::iterator p; //este � o ponteiro desta biblioteca
	
	x = 1;
	fila.push_back(x); //empurra o valor de x para a fila
	x = 2;
	fila.push_back(x); //empurra o valor de x para a fila
	x = 3;
	fila.push_back(x); //empurra o valor de x para a fila
	//depois desses 3 comandos, a fila ficou: fila -> 1 -> 2 -> 3
	
	//pilha.begin()-> inicializa��o || pilha.end() -> teste de parada || p++ -> incrementot
	for(p = fila.begin(); p != fila.end(); p++)
		soma += *p;	
	
	cout << "soma = " << soma << endl;
	
	
	while(!fila.empty()) //serve para limpar a mem�ria no final do c�digo
		fila.pop_front();
	
	return 0;
}