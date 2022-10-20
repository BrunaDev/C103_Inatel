#include <iostream>

using namespace std;

struct dado
{
	int notas; //variavel das notas
	float media; //armazena a média de cada nota
	float mediaT; //armazena a média da turma
};

int main()
{	
	dado *nota;
	int i; //contador
	int N; //quantidade de alunos
	float soma, result; //soma as notas/medias
	
	nota = new dado; //alocando memoria
	
	cin>>N; //entra com a quantidade de alunos

	for(i = 0; i < N; i++)
	{
		//entrando com as notas
		cin>>vetor[i].nota->notas;
	
		//calculando a media de cada aluno
		soma = nota->notas;
		
		nota->media = soma/N;
		
		result = nota->media;	
	}
	
	nota->mediaT = result/N;
	
	//mostrando a media
	cout << nota->mediaT << endl;
	
	nota++;
	
	delete nota;

	return 0;
}