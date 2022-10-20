//Utilizando um For (loop)
//pilha.begin() aponta para o primeiro nó da pilha 
//pilha.end() aponta para o nó imaginário, que vem depois do ultimo nó da pilha

#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> pilha; //"ponteiro" para a pilha
	int x; //var aux
	
	list<int>::iterator p; //este é o ponteiro desta biblioteca
	
	x = 1;
	pilha.push_front(x); //empurra o valor de x para a pilha
	x = 2;
	pilha.push_front(x); //empurra o valor de x para a pilha
	x = 3;
	pilha.push_front(x); //empurra o valor de x para a pilha
	//depois desses 3 comandos, a pilha ficou: pilha -> 3 -> 2 -> 1
	
	fila.pop_front(); //retira o primeiro elemento da pilha, no caso 3
	
	//pilha.begin()-> inicialização || pilha.end() -> teste de parada || p++ -> incrementot
	for(p = pilha.begin(); p != pilha.end(); p++)
		cout << *p << endl;
	
	return 0;
}