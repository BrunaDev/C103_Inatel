#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> lista1; //ponteiro para a lista 1
	list<int>::iterator p; //interador para varrer a lista 1
	
	list<int> lista2; //ponteiro para a lista 2
	list<int>::iterator q; //interador para varrer a lista 2
	
	list<int> lista3; //ponteiro para a lista 3
	
	int x; //variavel que será inserida na lista 1 e 2
	

	//Inserindo os elementos na lista 1
	cin >> x;
	while (x != 0) //verificação do elemento (não pode ser 0)
	{
		lista1.push_back(x); //"empurra" para o final da lista
		cin >> x;
		
		
	}
	
	//Inserindo os elementos na lista 2
	cin >> x;
	while (x != 0) //verificação do elemento (não pode ser 0)
	{
		
		lista2.push_back(x); //"empurra" para o final da lista
		cin >> x;
	}
	
	//verificação dos elementos 
	while(!lista1.empty() || !lista2.empty()) 
	{
		p = lista1.begin();
		q = lista2.begin();
		
			//Verifica e compara os valores nas lista
			if (*p<*q)
			{
				lista3.push_back(*p);
				lista1.pop_front();
			}
			if (*p == *q) 
			{
				lista3.push_back(*p);
				lista2.pop_front();
				lista1.pop_front();
			}
			if (*p>*q)
			{
				lista3.push_back(*q);
				lista2.pop_front();
			}
	}
	//Mostrando os elementos
	while(!lista3.empty()) //repete enquanto não chegar no final
	{
		x = *lista3.begin(); //conteúdo do primeiro nó da lista
		cout << x << " ";
		lista3.pop_front();//remove o primeiro nó da lista (já limpa a memória)
	}

	return 0;
}
