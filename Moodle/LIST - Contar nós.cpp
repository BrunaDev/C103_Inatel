#include <iostream>
#include <list>

using namespace std;

int contar(list<int> lista)
{
	int nos = 0; //armazena a quantidade de n�s (contador)
	
	list<int>::iterator p; //este � o ponteiro desta biblioteca
		
	//pilha.begin()-> inicializa��o || pilha.end() -> teste de parada || p++ -> incremento
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
	
	cout << contar(lista) <<endl; //retorna a fun��o contar como sa�da
	
	while(!lista.empty()) //serve para limpar a mem�ria no final do c�digo
		lista.pop_front();
	
	return 0;
}