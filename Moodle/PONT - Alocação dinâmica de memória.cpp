#include <iostream>

using namespace std;

struct dado
{
	int n1, n2, n3, n4; //variavel das notas
	float media; //armazena a média de cada nota
};

int main()
{	
	dado *nota;
	
	nota = new dado; //alocando memoria

	//entrando com as notas
	cin>>nota->n1;
	cin>>nota->n2;
	cin>>nota->n3;
	cin>>nota->n4;
	
	//calculando a media
	nota->media = (nota->n1+nota->n2+nota->n3+nota->n4)/4.0;
	
	//mostrando a media
	cout << nota->media << endl;
	
	delete nota;

	return 0;
}