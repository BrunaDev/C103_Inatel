#include <iostream>
#include <iomanip>

using namespace std;

int binaria(int matricula[],int N, int x){
	
	bool achou; // var aux p/ busca
	int baixo, meio, alto; // var aux
	
	baixo = 0;//definindo valor
	alto = N-1;//definindo valor
	achou = false;//definindo estado da variavel
	
	while ((baixo <= alto) && (achou == false)){ //faz a verificação das posições
		meio = (baixo + alto)/2;
		if(x < matricula[meio])
			alto = meio - 1;
		else 
           if(x > matricula[meio])
           	baixo = meio + 1;
           else
           	achou = true;
	}
	if(achou)
		return meio;
	else
		return -1;
}

int main()
{
	int N; //quantidade de alunos
	int X; //matricula a ser procurada
	int pos;//armazena a posição do corredor
	
	do{
		cin>>N;	
	}while(N<1 || N>1000);
	
	int matricula[N]; //vetor que armazenará a matricula
	
	for(int i=0; i<N; i++)
	{
		cin>>matricula[i];
	}
	
	cin>>X;
	
	pos = binaria(matricula, N, X); //chama a função que fara a busca
	
	if(pos == -1)
	{
		cout<<" Nao localizado";
	}
	else{
		cout<<"Corredor "<<pos;
	}
	
	return 0;
}