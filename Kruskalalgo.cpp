// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

struct node {
    int u;
    int v;
    int wt; 
    node(int first, int second, int weight) {
        u = first;
        v = second;
        wt = weight;
    }
};

bool comp(node a, node b) {
    return a.wt < b.wt; 
}

int findPar(int u, vector<int> &parent) {
    if(u == parent[u]) return u; 
    return parent[u] = findPar(parent[u], parent); 
}

void unionn(int u, int v, vector<int> &parent, vector<int> &size) {
    u = findPar(u, parent);
    v = findPar(v, parent);
    if(size[u] < size[v]) {
        parent[u] = v;
        size[v] += size[u]; 
    } else {
        parent[v] = u; 
        size[u] += size[v]; 
    }
}

void solve(){
    int N,m;
    cin >> N >> m;
    vector<node> edges; 
    for(int i = 0;i<m;i++) {
        int u, v, wt;
        cin >> u >> v >> wt; 
        edges.push_back(node(u, v, wt)); 
    }
    sort(edges.begin(), edges.end(), comp); 
    
    vector<int> parent(N);
    for(int i = 0;i<N;i++) 
        parent[i] = i; 
    vector<int> size(N, 0); 
    
    int cost = 0;
    vector<pair<int,int>> mst; 
    for(auto it : edges) {
        if(findPar(it.v, parent) != findPar(it.u, parent)) {
            cost += it.wt; 
            mst.push_back({it.u, it.v}); 
            unionn(it.u, it.v, parent, size); 
        }
    }
    cout << cost << endl;
    for(auto it : mst) cout << it.first << " - " << it.second << endl; 
    return 0;

}
 
int main(int argc, char const *argv[]){
    // take_input;
    fast;
    ll t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}
// GokuOp