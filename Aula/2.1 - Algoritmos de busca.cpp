#include <iostream>
#include <iomanip>

using namespace std;

int fatorial(int n)
{
	//caso base
	if(n == 1)
		return 1;
	else
		return n * fatorial(n-1);
}

int main()
{
	int n;
	int i;
	int fat = 1;
	
	cin>>n;
	
	for(i = 1; i<= n; i++)
	{
		fat *= i;
	}
	
	cout<<fat<<endl;
	cout<<fatorial(n);
	
	return 0;
}