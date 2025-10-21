#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

void preparedAdjList(unordered_map<int, list<int>> &adjList, vector<pair<int, int>>&edges){
    for(int i=0; i<edges.size();i++){
        int u= edges[i].first;
        int v= edges[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

void bfs(unordered_map<int,list<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node){
    queue<int> q;
    q.push(node);
    visited[node] = true;  // Fix: Use assignment, not comparison

    while(!q.empty()){
        int frontNode=q.front();
        q.pop();

        ans.push_back(frontNode);

        for(auto i:adjList[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;  // Fix: Mark as visited when adding to queue
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>>edges)
{
    unordered_map<int, list<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    preparedAdjList(adjList, edges);

    for(int i=0;i< vertex;i++){
        if(!visited[i]){
            bfs(adjList,visited,ans,i);
        }
    }
    return ans;
}

int main(){
    int vertices, edgeCount;
    
    cout << "Enter number of vertices: ";
    cin >> vertices;
    
    cout << "Enter number of edges: ";
    cin >> edgeCount;
    
    vector<pair<int, int>> edges;
    
    cout << "Enter edges (u v):\n";
    for(int i = 0; i < edgeCount; i++){
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }
    
    vector<int> result = BFS(vertices, edges);
    
    cout << "BFS Traversal: ";
    for(int node : result){
        cout << node << " ";
    }
    cout << endl;
    
    return 0;
}