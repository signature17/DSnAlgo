// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// check if y is subsequence of x
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;


void solve(){
    string st, pt;
    cin >> st >> pt;
    int i = 0 , j = 0;
    int n =  pt.size();
    int m = st.size();
    while(j < n){
        if(st[i] == pt[j]){
            i++;
        }
        if(i == m){
            cout << 1 << "\n";
            return;
        }
        j++;
    }
    cout << 0 <<"\n";
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