#include <iostream>
#include <list>

using namespace std;

struct no
{
	int v; // destino
	int p; // peso
};

int main()
{
	int nVertices = 4;
	list<no> adj[10]; // lista de adjacencia
	no aux; // var aux p; inserir dados em adj
	int u, v, p; // origem, destino e peso de uma aresta
	list<no>::iterator q; // interator p/ varrer adj

	
	// no caminho 0 - 1
	u = 0; // origem
	v = 1; // destino
	p = 7; // peso
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux); // coloca na lista de adj de u
	
	// no caminho 0 - 2
	u = 0; // origem
	v = 2; // destino
	p = 6; // peso
	
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux); // coloca na lista de adj de u
	// no caminho 0 - 3
	u = 0; // origem
	v = 3; // destino
	p = 2; // peso
	
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux); // coloca na lista de adj de u
	// no caminho 1 - 2
	u = 1; // origem
	v = 2; // destino
	p = 3; // peso
	
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux); // coloca na lista de adj de u
	
	// no caminho 2 - 3
	u = 2; // origem
	v = 3; // destino
	p = 5; // peso
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux); // coloca na lista de adj de u	
	
	// Mostrando o grafo
	for(u = 0; u < nVertices; u++) // mostra todos na adj [0], depois adj[1] e etc.
		for(q=adj[u].begin(); q!=adj[u].end(); q++)
			cout << u << " " << q->v << " " << q->p << endl;
		
    // Limpando a memória alocada
    for(u=0; u<nVertices; u++)
    	while(!adj[u].empty())
    		adj[u].pop_front();
		
	return 0;
}