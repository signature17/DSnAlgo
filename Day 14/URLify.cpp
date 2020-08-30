// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// Urlify - this question is of the cracking the coding interview , yeh sikha h bas input string with spaces.
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;


void solve(){
    string s;
    
    cin.ignore();
    getline(cin,s);
    int n;
    cin >> n;
    for(int i = 0 ; i < s.size() ; i++){
        
        if(s[i] == ' '){
            s.replace(i , 1, "%20");
        }
    }
    cout << s <<"\n";
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