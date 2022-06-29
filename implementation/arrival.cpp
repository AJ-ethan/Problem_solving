
#include<iostream>
#include<map>
#include<list>
#include<vector>

using namespace std;

class Graph
{
public:
	map<int,bool>visited;
	map<int, list<int>>adj;
	map<int,vector<int>>timing;
	int arrival=0;
	void addEdge(int v,int w);
	
	void dfs(int v);
	
};
void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
}
void Graph::dfs(int v)
{
	visited[v] = true;
	//cout<<v<<endl;
	timing[v].push_back(arrival);
	arrival++;
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i){
        	if (!visited[*i]){
            		dfs(*i);
            		arrival++;
            		}
            		
	}
	timing[v].push_back(arrival);
	cout<< v<< ":"<<timing[v][0] << " "<< timing[v][1]<<endl ;
	
	
}
int main()
{
    // Create a graph given in the above diagram
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.dfs(2);
 
    return 0;
}
