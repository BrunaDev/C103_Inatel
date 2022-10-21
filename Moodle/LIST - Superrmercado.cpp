#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> estoque; //ponteiro para o estoque
	list<int>::iterator p; //interador para varrer o estoque
	
	list<int> venda; //ponteiro para a venda
	list<int>::iterator v; //interador para varrer a venda
	
	int x; //variavel que indicara qual a  lista
	int y; //elemento a ser inserido
	int n;//numero de operações
	int i; //contador

	cin >> n; //entrando com o numero de operações

	//Inserindo os elementos na lista
	for(i = 0; i < n; i++)
	{
		cin >> x;//indicando a lista
		
		if (x == 1)
		{
			cin >> y;
			estoque.push_back(y);//fim da lista (fila)
		}
		else
		{
			y = *estoque.begin();
			venda.push_front(y);//começo da lista (pilha)
			estoque.pop_front();
		}

	}

	//Mostrando os elementos
	cout << "Estoque: ";
	for(p = estoque.begin(); p != estoque.end(); p++)
	{
		cout << *p << " ";
	}
	
	cout << endl; //espaço entre as respostas

	cout << "Venda: ";
	for(v = venda.begin(); v != venda.end(); v++)
	{
		cout << *v << " ";
	}
	cout << endl;
	
	return 0;
}