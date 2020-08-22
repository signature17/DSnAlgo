// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// Catalan Number - Catalan numbers are a sequence of natural numbers that occurs in many interesting counting problems like following.
// 1 1 2 5 14 32

#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

ll ncr(ll n , ll k ){
    ll ans = 1;
    if(k > n - k) k =  n - k;
    for(int i = 0 ; i < k ; i++){
        ans *= (n - i);
        ans /= (i + 1);
    }
    return ans;
}

ll recurcatalan(ll n){
    if(n <= 1) return 1;
    ll res = 0;
    for(int i = 0 ; i < n ; i++){
        res += recurcatalan(i)* recurcatalan(n - i - 1);
    }
    return res;
}
ll dpcatalan(ll n){
    ll cat[n + 1] ;
    cat[0] = cat[1] = 1;
    for(int i = 2 ; i <= n ; i++){
        cat[i] = 0;
        for(int j = 0 ; j < i ; j++){
            cat[i] += cat[j] * cat[i - j - 1];
        }
    }
    return cat[n];
}

void solve(){
    ll n ;
    cin >> n;
    cout << recurcatalan(n) << "\n";
    cout << dpcatalan(n) << "\n";
    ll  k = ncr(2* n , n);
    cout << k / (n + 1);
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