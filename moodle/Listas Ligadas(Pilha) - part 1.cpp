#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> pilha; //"ponteiro" para a pilha
	int x; //var aux
	
	list<int>::iterator p; //este � o ponteiro desta biblioteca
	
	x = 1;
	pilha.push_front(x); //empurra o valor de x para a pilha
	x = 2;
	pilha.push_front(x); //empurra o valor de x para a pilha
	x = 3;
	pilha.push_front(x); //empurra o valor de x para a pilha
	//depois desses 3 comandos, a pilha ficou: pilha -> 3 -> 2 -> 1
	
	p = pilha.begin(); //faz com que o ponteiro aponte para o primeiro valor da pilha (ultimo inserido)
	cout << *p << endl; //mostra o valor que est� no endere�o p
	
	p++; //faz com que o ponteiro p "ande" uma "casa", mostrando o pr�ximo valor
	cout << *p << endl; //mostra o valor que est� no endere�o p
	
	p++; //faz com que o ponteiro p "ande" uma "casa", mostrando o pr�ximo valor
	cout << *p << endl; //mostra o valor que est� no endere�o p
	
	return 0;
}