#include <iostream>
#include <list>

using namespace std;

struct no
{
	int v; // vertice de destino da aresta
	int peso; // peso da aresta
};

//Função para criar as arestas
void new_Aresta(list<no>adj[], int u, int v, int p, int orientado)
{
	//variavel auxiliar para inserir as arestas na lista de adjacências
	no aux;
	
	//atribuindo os valores ao aux (na struct)
	aux.v = v;
	aux.peso = p;
	adj[u].push_back(aux);
	
	if(orientado == 0)
	{
		aux.v = u; //aux.vertice recebe o que está em u
		adj[v].push_back(aux);
	}
}

//Função de busca em largura
void bfs(list<no>adj[], int nVertices, int s)
{
	int state[100];
	int p[100];
	int u,v; //variáveis aux.
	
	list<int> Q;
	list<no>::iterator q; //iterator para varrer a lista de adj
	
	for(u=0; u<nVertices; u++)
	{
		if(u != s) //se "u" for diferente de "s"
		{
			state[u] = -1; // undiscovered
			p[u] = -1; // sem pais
		}
	}
	state[s]=0; // discovered
	p[s] = -1;
	Q.push_back(s);
	
	while(!Q.empty())
	{
		u = Q.front();
		Q.pop_front();
		cout << u << endl;
		for(q = adj[u].begin(); q != adj[u].end(); q++)
		{
			v = q->v;
			cout << u << " " << v << endl;
			
			if (state[v] == -1)
			{
				state[v] = 0; // discovered
				p[v] = u;
				Q.push_back(v);
			}
		}
		state[u] = 1; // processed
	}
}

int main ()
{
	int p; // peso da aresta
	int s; // estado
	int u, v; // vértices de origem e destino (aresta)
	int nVertices; // numero de vertices do grafo
	int orientado = 0; // 0: não orientado, 1: orientado
	
	list<no>adj[10]; // lista de adjacências
	list<no>::iterator q; // iterator para varrer a lista de adjacências
	
	//Inserindo o numero de vertices
	cin >> nVertices;
	
	//Inserindo o estado inicial
	cin >> s;
	
	//Inserindo os valores da aresta
	cin >> u >> v >> p;
	
	//While para validar valores e mandar para a função
	while(u != -1 && v != -1 && p != -1)
	{
		new_Aresta(adj, u, v, p, orientado);
		cin >> u >> v >> p; //inserindo a prox. aresta
	}
	
	bfs(adj, nVertices, s);
	
	return 0;
}