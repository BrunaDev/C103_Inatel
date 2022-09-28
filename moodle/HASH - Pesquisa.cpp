#include <iostream>

using namespace std;

//Estrutura para armazenamento dos dados na tabela
struct dado
{
	int k;
	int status; 
	//0: vazio e 1: ocupado
};

//m�todo da divis�o + fun��o auxiliar
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

// fun��o que implementa a sondagem linear
int hash1(int k, int i, int m)
{
	int res1; //variavel do m�todo da divis�o
	int res2; //variavel da sondagem linear

	//faz o m�todo da divis�o
	res1 = hash_aux(k, m);

	//faz a sondagem auxiliar
	res2 = (res1 + i) % m;

	return res2;

}
//Insere os elementos na tabela hash
//Retorna a posi��o que K foi inserida (-1 se a tabela estiver cheia)

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
			return j; //posi��o que k foi inserida em T
		}
		else
		{
			i++;
		}
	}
	while(i != m);
	return -1;

}

//fun��o que faz a pesquisa
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
	}while (T[j].status != 0 && i < m);
	return -1;

}

int main()
{
	dado T[50]; //tabela hash
	int m; //tamanho da tabela
	int cont; //contador
	int valor;//chave a ser inserida na tabela
	int k; //chave a ser identificada
	int res; //recebe a posi��o da chave identificada

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

	//lendo a chave a ser identificada e mandando para a presquisa
	cin >> k;
	res = hash_search (T, m, k);

	//mostando o resultado
	if (res != -1)
		cout << "Chave " << k << " encontrada na posicao " << res << endl;
	else
		cout << "Chave " << k << " nao encontrada" << endl;

	return 0;
}