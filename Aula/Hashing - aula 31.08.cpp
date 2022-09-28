//HASH - hash_aux (moodle)
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstdio>

//Objetivo: armazenar itens de maneira que a 
//pesquisa fique mais rápida

using namespace std;

int hash_aux(int k, int m)
{
	int h; //resultado do hashing
	
	h = k % m; //metodo da divisao
	
	if(h<0) //se resultado der negativo, soma m
		h += m;
	
	return h;
}

int main()
{
	int k; //chave a ser inserida
	int m; //tamanho da tabela hash
	
	cin>>k>>m;
	
	while(k!=0 && m!=0)
	{
		//chamando a função de hash e mostrando seu resultado ->
		//cout mostra -> hash_aux chama a função retornando o resultado
		cout<<hash_aux(k, m)<<endl;
		
		cin>>k>>m; //entra com os proximos valores
	}
	
	return 0;
}