#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class Graph{
public:
unordered_map<int, list<int>>adj;
void addEdge(int u, int v, bool direction){
adj[u].push_back(v);
if(direction==0){
    adj[v].push_back(u);
}
}
void printadjList(){
    for(auto i:adj){
        cout<<i.first<<"->";
        for(auto j:i.second){
            cout<<j<<",";
        }
        cout<<endl;
    }
}
};
int main(){
    int m;
    cout<<"number of edges:";
    cin>>m;

    Graph g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);//0 means undirected graph
        // 1 means directed graph
    }

    g.printadjList();
}