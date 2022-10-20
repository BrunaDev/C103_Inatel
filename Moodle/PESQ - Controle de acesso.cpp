#include <iostream>
#include <iomanip>

using namespace std;

int binaria(int vetor[],int tamanho, int x){
	
	bool achou; // var aux p/ busca
	int baixo, meio, alto; // var aux
	
	baixo = 0;//definindo valor
	alto = tamanho-1;//definindo valor
	achou = false;//definindo estado da variavel
	
	while ((baixo <= alto) && (achou == false)){ //faz a verifica��o das posi��es
		meio = (baixo + alto)/2;
		if(x < vetor[meio])
			alto = meio - 1;
		else 
           if(x > vetor[meio])
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
	int i = 0; //contador
	int vetor[20];//armazena os dados
	int X;//elemento a ser procurado
	int pos;//posi��o em que X foi encontrado no vetor. -3 se n�o for encontrado.
	int tam;//tamanho do vetor
	int ID;//valores que entrar�o no vetor
	
	//1 - Insira N valores inteiros em um vetor
	cin>>ID;
	while(ID!=-1)
	{
		vetor[i]=ID;
		i++;
		cin>>ID;
	}
	tam=i;
	
	//2 - Leia X
	cin>>X;

	//3 - Procurar po X no vetor
	pos = binaria(vetor, tam, X);
	
	//4 - Se X for encontrado no vetor, mostre a posi��o. 
	//	Caso contr�rio, diga que n�o encontrou.
	if(pos == -1)
	{
		cout<<" Nao possui acesso";
	}
	else{
		cout<<"Possui acesso";
	}
}