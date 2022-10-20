#include <iostream>

using namespace std;

//m�todo da divis�o
int hash_aux(int k, int m)
{
	int res;//variavel do resultado

	res = k % m; //faz o calculo
	if (res < 0) //verifica condi��o
	{
		 return res + m;
	}
	else
	{
		return res;
	}

}

//m�todo de sondagem
int hash1(int k, int i, int m)
{
	int res1; //variavel do m�todo da divis�o
	int res2; //variavel da sondagem linear
	
	//faz o m�todo da divis�o
	res1 = hash_aux(k,m);
	
	//faz a sondagem auxiliar
	res2 = (res1+i)%m;
	
	return res2;
	
}

int main()
{
	int k;//chave
 	int m;//tamanho
 	int res[20]; //recebe os valores da fun��o
 	int i; //tentativas da sondagem
 	
 	//entrada dos valores
 	cin >> k;
	cin >> m;

	//mandando para soldagem
	for(i=0; i<m; i++)
	{
		res[i] = hash1(k,i,m);
		
	}
	for(i=0; i<m-1; i++)
	{
		cout<<res[i]<<" ";
	}
	cout<<res[i]<<endl;

	
	return 0;
}