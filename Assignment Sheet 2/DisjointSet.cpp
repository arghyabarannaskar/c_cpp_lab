#include<iostream>
#include<vector>
using namespace std;

class DSU{
    vector<int> parent, size;
    public:
    DSU(int V){
        size.resize(V, 1);
        parent.resize(V);
        for(int i = 0; i<V; i++){
            parent[i] = i;
        }
    }
    
    int find(int node){
        if(node == parent[node]) return node;
        return parent[node] = find(parent[node]);
    }
    
    void unionBySize(int u, int v){
        int u_set = find(u);
        int v_set = find(v);
        if(u_set == v_set) return;
        if(size[u_set]<size[v_set]){
            parent[u_set] = v_set;
            size[v_set]+=size[u_set];
        }else{
            parent[v_set] = u_set;
            size[u_set]+= size[v_set];
        }
    }
};

int main(){
    DSU ds(8);
    ds.unionBySize(1, 2);
    ds.unionBySize(2, 3);
    ds.unionBySize(4, 5);
    ds.unionBySize(6, 7);
    ds.unionBySize(5, 6);

    if(ds.find(3) == ds.find(7)){
        cout << "Same\n";
    }
    else
        cout << "Not same\n";

    ds.unionBySize(3, 7);

    if(ds.find(3) == ds.find(7)){
        cout << "Same\n";
    }
    else
        cout << "Not same\n";

    return 0;
}