#include <iostream>

using namespace std;

int main()
{
	int a; //vari�vel int
	int *b; //ponteiro para uma vari�vel int
	int c = 4;
	
	a = 2;
	b = &a; //operador de refer�ncia (endere�o de)
	
	cout << "a = " << a <<endl; //mostra o valor armazenado em a
	
	cout << "b = " <<b << endl; //mostra a posi��o em valor hexadecimal
	
	//cout << "b = " <<(int)b << endl;//mostra a posi��o em valor inteiro
	
	cout << "*b = " << *b << endl; //operador de de-refer�ncia
								  //conte�do apontado por b

    *b = 3; // ele "manda" a execu��o alterar o valor que est� em determinada posi��o
    cout << "*b = " << *b << endl;
    cout << "a = " << a << endl;
    
    b = &c; //operador de refer�ncia (endere�o de)
    *b = 5;
    cout << "*b = " << *b << endl;
    cout << "c = " << c << endl;
	
	return 0;
}