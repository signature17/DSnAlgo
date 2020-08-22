// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// ncr for eg 4 2 => 6 ans using moudulo

#include "bits/stdc++.h"
#include <boost/multiprecision/cpp_int.hpp> 
using namespace std; 
using ll = long long;
const ll mod=1e9+7;

#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using boost::multiprecision::cpp_int;

ll res;

cpp_int ncr (ll n, ll k) { 
    if(k > n) return 0;
    cpp_int res = 1; 
  
    if (k > n - k) 
        k = n - k; 
  
    for (int i = 0; i < k; ++i) { 
        res *= ((n - i) % mod); 
        res /= ((i + 1)% mod); 
    } 
  
    return (res% mod); 
}



void solve(){
    ll n , k;
    cin >> n >> k;
    //cout << recurcatalan(n) << "\n";
    //cout << dpcatalan(n) << "\n";
    cpp_int  t = ncr(n , k);
    cout << t << "\n";
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