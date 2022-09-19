#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstdio>

using namespace std;

int hash1(int k, int i, int m)
{
	int h1;
	
	h1 = (h+i)%m;
	
	return h1;
}

int hash_aux(int k, int m)
{
	int h; //resultado do hashing
	int i=0;//numero de vezes que se repete
	
	h = k % m; //metodo da divisao
	
	if(h<0) //se resultado der negativo, soma m
		h += m;
	
	i++;
	hash1(k, i, m);
	
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
		hash_aux(k, m);
		
		cin>>k>>m; //entra com os proximos valores
	}
	
	cout<<hash1(k, i, m)<<" ";
	
	return 0;
}