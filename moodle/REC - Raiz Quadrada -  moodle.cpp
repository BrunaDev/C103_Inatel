#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int raiz(int X, int X0, int E) //raiz quadrada com recurs�o
{
	//caso base
	if(abs(pow(X0,2)-X)<=E)
		return X0;
	else
		return ;
}

int main()
{
	int X; //declara a variavel que ser� calculada
	int X0; //declara a variavel de estimativa
	int E; //declara a variavel de limitante
	
	//entra com as variaveis
	cin>>X;
	cin>>X0;
	cin>>E;
	
	//chama a fun��o da raiz quadrada com recurs�o
	cout<<raiz(X, X0, E);
	
	return 0;
}