// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;


void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int checker = 0; 
  
    for (int i = 0; i < n ; ++i ) { 
        int val = (s[i]-'a'); 
        if ((checker & (1 << val)) > 0){
            cout << "No";
            return;
        }
            
        checker |=  (1 << val); 
        
    } 
  
    cout << "Yes\n";
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