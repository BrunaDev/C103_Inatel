#include <iostream>

using namespace std;

//Estrutura para armazenamento dos dados na tabela
struct dado
{
	int k;
	int status; 
	//0: vazio, 1: ocupado, 2: removido
};

//método da divisão + função auxiliar
int hash_aux(int k, int m)
{
	int res;//variavel do resultado

	res = k % m; //faz o calculo
	if (res < 0)
	{
		return res + m;
	}
	else
	{
		return res;
	}

}

// função que implementa a sondagem linear
int hash1(int k, int i, int m)
{
	int res1; //variavel do método da divisão
	int res2; //variavel da sondagem linear

	//faz o método da divisão
	res1 = hash_aux(k, m);

	//faz a sondagem auxiliar
	res2 = (res1 + i) % m;

	return res2;

}
//Insere os elementos na tabela hash
//Retorna a posição que K foi inserida (-1 se a tabela estiver cheia)

int hash_insert(dado T[], int m, int k)
{
	int i = 0;//contador
	int j;//contador

	do
	{
		j = hash1(k, i, m);
		if (T[j].status != 1)
		{
			T[j].k = k;
			T[j].status = 1;
			return j; //posição que k foi inserida em T
		}
		else
		{
			i++;
		}
	}
	while(i != m);
	return -1;

}

//função que faz a pesquisa
int hash_search(dado T[], int m, int k)
{
	int i, j; //contador
	i = 0;
	do
	{
		j = hash1(k, i, m);
		if (T[j].k == k)
		{
			return j;
		}
		i = i + 1;
	}
	while (T[j].status != 0 && i < m);
	return -1;

}

//função que faz a remoção
int hash_remove(dado T[], int m, int k)
{
	int  j; //recebe a posição do elemento
	j = hash_search(T, m, k);
	if(j != -1)
	{
		T[j].status = 2;
		T[j].k = -1;
		return 0; // consegui remover
	}
	else
		return -1; // k nao esta na tabela

}

int main()
{
	dado T[50]; //tabela hash
	int m; //tamanho da tabela
	int cont; //contador
	int valor;//chave a ser inserida na tabela
	int k; //chave a ser identificada

	//ler tamanho da tabela
	cin >> m;

	//inicializar a tabela
	for(cont = 0; cont < m; cont++)
	{
		T[cont].k = -1;
		T[cont].status = 0;
	}

	//ler as chaves e inserir na tabela
	cin >> valor;
	while(valor != 0)
	{
		hash_insert(T, m, valor);
		cin >> valor;
	}

	//lendo a chave a ser removida e mandando para a remoção e pesquisa
	cin >> k;
	hash_search (T, m, k);
	hash_remove(T, m, k);

	//mostrando a tabela final
	for(cont = 0; cont < m-1; cont++)
	{
		cout << T[cont].k << " ";
	}
	cout << T[cont].k <<endl;
	
	return 0;
}