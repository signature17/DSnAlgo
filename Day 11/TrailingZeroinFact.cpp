// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// trailing Zero in Factorial of n;
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

/*
void solve(){
	ll n , cnt =  0;
	cin >> n;
	for(int i = 5 ; n/i >= 1 ; i *= 5){
		cnt += n/i;
	}
	cout << cnt << "\n";
}*/

void solve(){
	ll n , cnt =  0;
	cin >> n;
	while(n >= 1){
	    cnt+= n/5;
	    n /= 5;
	}
	cout << cnt << "\n";
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