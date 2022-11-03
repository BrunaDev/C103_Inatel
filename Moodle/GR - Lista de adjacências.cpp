#include <iostream>
#include <list>

using namespace std;

struct no
{
	int v; // vertice adjacente
	int peso; // peso da aresta
};

//Fun��o p/ criar as arestas
void cria_aresta(list<no>adj[], int u, int v, int p, int orientado)
{	
	no aux; // var aux p; inserir dados em adj
	
	aux.v = v;
	aux.peso = p;
	adj[u].push_back(aux); // coloca na lista de adj de u
	
	if(orientado == 0) //criando aresta de volta
	{
		aux.v = u; // na volta/ o destino vira a origem inicial
		adj[v].push_back(aux); // coloca na lista de adj de v
	}
}

int main()
{
	list<no> adj[10]; // lista de adjacencia
	list<no>::iterator q; // interator p/ varrer adj
	int nVertices; // n�mero de vertices do grafo
	int orientado; // 1:orientado 0:n�o orientado
	int u, v, p; // origem, destino e peso de uma aresta
	int i = 0; // contador
	
	// entra com o n�m. de v�rtices do grafo
	cin >> nVertices; 
	
	// informa se � ou n�o orientado (0 ou 1)
	cin>> orientado;
	
	// informa a origem, o destino e o peso
	cin >> u >> v >> p;
	// confere se todos os n�m. s�o diferentes de -1
	while(u!=-1 && v!=-1 && p!=-1)
	{
		//chama a fun��o e envia os par�metros
		cria_aresta(adj, u, v, p, orientado);
		//informa novos valores de origem, destino e peso
		cin >> u >> v >> p;
	}
	
	//Mostrando a lista de adjac�ncias
	for(i=0; i<nVertices; i++)
		for(q=adj[i].begin(); q!=adj[i].end(); q++)
			cout << i << " " << q->v << " " << q->peso << endl;
		
	// Limpando a mem�ria alocada
    for(u=0; u<nVertices; u++)
    	while(!adj[u].empty())
    		adj[u].pop_front();
	
	return 0;
}