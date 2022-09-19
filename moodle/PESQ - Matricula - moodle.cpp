#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
	int N;
	int X=0;
	char nomep[50];
	
	struct dados
	{
		char nome[50];
		char curso[20];
		int matricula;
	};
	
	do{
		cin>>N;
	}while(N<1 || N>1000);
	
	dados vet[N];
	
	for(int i=0; i<N; i++)
	{
		cout<<endl;
		cin.ignore();
		cin.getline(vet[i].nome, 50);
		cin>>vet[i].curso;
		cin>>vet[i].matricula;
	}
	
	cin.ignore();
	cin.getline(nomep, 50);
	
	for(int i=0; i<N; i++)
	{
		if(strcmp(vet[i].nome, nomep) == 0)
		{
			cout<<vet[i].nome<<endl;
			cout<<vet[i].curso<<endl;
			cout<<vet[i].matricula<<endl;
		}else{X++;}
	}
	
	cout<<endl;
	if(N == N)
	{
		cout<<"Aluno nao localizado";
	}
	
	return 0;
}