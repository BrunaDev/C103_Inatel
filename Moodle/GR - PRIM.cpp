#include <iostream>
#include <list>
#include<climits>

using namespace std;

struct no
{
	int v; // vertice de destino (aresta)
	int peso; // peso(aresta)
};

//Cria as arestas
void aresta(list<no>adj[], int u, int v, int p, int orientado)
{
	no aux; // var aux para inserir as arestas na lista de adjacências
	
	aux.v = v;
	aux.peso = p;
	adj[u].push_back(aux);
	
	if (orientado == 0)
	{
		aux.v = u;
		adj[v].push_back(aux);
	}

}

//Implementa o prim
void prim(list<no>adj[], int nVertices, int start)
{
	int u, v; // vértices de origem e destino
	bool intree[10];
	int parent[10];
	int destino;
	int weight;
	int dist;
	int distance[10];
	int soma=0; //soma os pesos
	
	list<no>::iterator q; // iterador para varrer a lista de adj

	for(u = 0; u < nVertices; u++)
	{
		intree[u] = false;
		distance[u] = INT_MAX;
		parent[u] = -1;
	}
	distance[start] = 0;
	v = start;
	
	while(intree[v] == false)
	{
		intree[v] = true;
		for(q = adj[v].begin(); q != adj[v].end(); q++ )
		{
			destino = q->v;
			weight = q->peso;
			if (distance[destino] > weight && intree[destino] == false)
			{
				distance[destino] = weight;
				parent[destino] = v;
			}
		}
		v = 0;
		dist = INT_MAX;
		for(u = 0; u < nVertices; u++)
		{
			if (intree[u] == false && dist > distance[u])
			{
				dist = distance[u];
				v = u;
			}
		}

	}
	//Mostrando a árvore
	cout << "Arvore Geradora Minima: " << endl;
	for(u = 1; u < nVertices; u++)
	{
		cout << parent[u] << " " << u << endl;
		soma = soma + distance[u];
	}
	cout << "Custo: "<<soma<<endl;

}

int main()
{
	list<no> adj[10]; // lista de adjacências
	list<no>::iterator q; // iterador para varrer a lista de adj
	
	int nVertices; // numero de vértices do grafo
	int u, v; // vértices de origem e destino de uma aresta
	int p; // peso da aresta
	int orientado = 0; //0: Não orientado, 1: orientado
	int s ;//estado

	//ENtrando com o numero de vertices do grafo
	cin >> nVertices;

	//Entrando com o estado (se é, ou não, orientado)
	cin >> orientado;

	//Entrando com o vértice inicial
	cin >> s;

	// Entrando com a aresta e mandando para a função
	cin >> u >> v >> p;
	while (u != -1 && v != -1 && p != -1)
	{
		aresta(adj, u, v, p, orientado); // chama a função aresta
		cin >> u >> v >> p;
	}
	prim(adj, nVertices, s); // chama a função prim

	 return 0;
}