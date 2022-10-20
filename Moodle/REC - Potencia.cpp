#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int potencia(int a, int n) //potencia com recursão
{
	//caso base
	if(n == 0)
		return 1;
	else
		return a*potencia(a, n-1);
}

int main()
{
	int a; //declara a variavel base
	int n;//declara a variavel de potencia
	
	//entra com as variaveis
	cin>>a;
	cin>>n;
	
	//chama a função da potencia com recursão
	cout<<potencia(a, n);
	
	return 0;
}