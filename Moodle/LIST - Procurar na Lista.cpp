#include <iostream>
#include <list>

using namespace std;

bool encontrar(list<int> lista, int x)
{
	list<int>::iterator p; //este é o ponteiro desta biblioteca
		
	//pilha.begin()-> inicialização || pilha.end() -> teste de parada || p++ -> incremento
	for(p = lista.begin(); p != lista.end(); p++)
	{
		if(x == *p)
			return true;
		else
			return false;
	}
}

int main()
{
	list<int> lista; //"ponteiro" para a lista
	int N; //var aux
	int x;//variavel a ser procurada
	bool res;//variavel para receber a resposta
	
	cin>>N;
	while(N!=0)
	{   cin>>N;
	    lista.push_back(N); //empurra o valor de x para a pilha
	}
	
	cin>>x;

	res = encontrar(lista, x);
	
	if(res == true)
		cout << "Encontrado" << endl;
	else
		cout << "Nao encontrado" << endl;
	
	while(!lista.empty()) //serve para limpar a memória no final do código
		lista.pop_front();
	
	return 0;
}