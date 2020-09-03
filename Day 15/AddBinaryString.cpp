// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;


void solve(){
    string s1 , s2 ; 
    cin>>s1>>s2;
    int l=s1.size() - 1 , r=s2.size() - 1, c = 0, sum = 0;
    string res ="";
        
    while(l >= 0 || r >= 0 || c == 1){
  		if(l >= 0) sum += s1[l--]-'0';
        if(r >= 0) sum += s2[r--]-'0';
        sum += c;
        res += (sum%2)+'0';
        c = sum/2;
        sum = 0;
    }
    reverse(res.begin(),res.end());
    cout<<res<<"\n";
    
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