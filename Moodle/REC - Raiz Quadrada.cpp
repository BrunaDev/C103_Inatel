#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int raiz(int X, int X0, int E) //raiz quadrada com recursão
{
	//caso base
	if(abs(pow(X0,2)-X)<=E)
		return X0;
	else
		return ;
}

int main()
{
	int X; //declara a variavel que será calculada
	int X0; //declara a variavel de estimativa
	int E; //declara a variavel de limitante
	
	//entra com as variaveis
	cin>>X;
	cin>>X0;
	cin>>E;
	
	//chama a função da raiz quadrada com recursão
	cout<<raiz(X, X0, E);
	
	return 0;
}