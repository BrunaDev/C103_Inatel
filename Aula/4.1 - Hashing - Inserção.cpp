#include <iostream>
#include <iomanip>

using namespace std;

struct dado
{
	int k; //chave
	int status; //0:vazio, 1:ocupado
};

int hash_insert(dado t[], int m, int k)
{
	int i = 0;
	int j;
	
	do
	{
		j = ((k%m)+i)%m;
		
		if(t[j].status != 1)
		{
			t[j].k = k;
			t[j].status = 1;
			
			return j;
		}
		else
		{
			i = i+1;
		}
	}while(i!=m);
	
	return -1;
}

int main()
{
	int m; //tamanho da tabela
	int N; //variavel auxiliar
	int i; //contador
	
	cin>>m; //insere o tamanho
	
	dado t[m]; //define o vetor da struct para o tamanho escolhido

	cin>>N;
	while(N!=0)
	{
		t[i].k = N;
		i++;
		cin>>N;
	}
	
	hash_insert(t, m, k);
	
	return 0;
}