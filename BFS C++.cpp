#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Graph {
	int V; 
	list<int>* adj;
	void DFSUtil(int v, bool visited[]);

public:
	Graph(int V);
	~Graph();
	void addEdge(int v, int w);
	void connectedComponents();
};
void Graph::connectedComponents()
{
	bool* visited = new bool[V];
	for (int v = 0; v < V; v++)
		visited[v] = false;

	for (int v = 0; v < V; v++) {
		if (visited[v] == false) {
			DFSUtil(v, visited);

			cout << "\n";
		}
	}
	delete[] visited;
}

void Graph::DFSUtil(int v, bool visited[])
{
	visited[v] = true;
	cout << v << " ";
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFSUtil(*i, visited);
}

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

Graph::~Graph() { delete[] adj; }
void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
	adj[w].push_back(v);
}

int main()
{
	Graph g(5); 
	g.addEdge(1, 0);
	g.addEdge(2, 1);
	g.addEdge(3, 4);
	g.connectedComponents();

	return 0;
}

