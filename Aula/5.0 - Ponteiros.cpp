#include <iostream>

using namespace std;

int main()
{
	int a; //variável int
	int *b; //ponteiro para uma variável int
	int c = 4;
	
	a = 2;
	b = &a; //operador de referência (endereço de)
	
	cout << "a = " << a <<endl; //mostra o valor armazenado em a
	
	cout << "b = " <<b << endl; //mostra a posição em valor hexadecimal
	
	//cout << "b = " <<(int)b << endl;//mostra a posição em valor inteiro
	
	cout << "*b = " << *b << endl; //operador de de-referência
								  //conteúdo apontado por b

    *b = 3; // ele "manda" a execução alterar o valor que está em determinada posição
    cout << "*b = " << *b << endl;
    cout << "a = " << a << endl;
    
    b = &c; //operador de referência (endereço de)
    *b = 5;
    cout << "*b = " << *b << endl;
    cout << "c = " << c << endl;
	
	return 0;
}