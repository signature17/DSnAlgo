// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// o(n2)- very basic approach but had to do it O(nlogn) using BIT
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;


void solve(){
    ll n;
    cin >> n ;
    std::vector<ll> v(n) , cnt(n);
    for(int i =  0 ; i < n  ; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++) cnt[i] = 0; 
  
    for(int i = 0; i < n; i++) { 
        for (int j = i+1; j < n; j++){ 
            if (v[j] < v[i]) 
                cnt[i]++; 
        } 
    }
    for(auto i : cnt) cout << i << " " ;
    cout << "\n";
}
 
int main(int argc, char const *argv[]){
    // take_input;
    fast;
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
// GokuOp