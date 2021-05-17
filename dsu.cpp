Simple dsu code for checking if two belong to the same component or not

// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll par[100000];
ll rank[100000];

void makeset(){
    for(int i = 1 ; i <= n ;i++){
        parent[i] = i;
        rank[i] = 0;
    }
}

int findpar(int node){
    if(node == par[node]) return node;
    return par[node] = findpar(par[node]);
}

void union(int u , int v){
    u = findpar(u);
    v = findpar(v);
    if(rank[u] > rank[v]){
        par[v] = u;
    }
    else if (rank[u] > rank[v]) par[u] = v;
    else{
        par[u] = v;
        rank[v]++;
    }
}

void solve(){
    makeset();
    int m;
    cin >> m;
    while(m--){
        int a , b;
        cin>> a >> b;
        union(a , b);
    }
    int x , y;
    cin >> x >> y;
    if(findpar(x) != findpar(y)) return false;
    return true;

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