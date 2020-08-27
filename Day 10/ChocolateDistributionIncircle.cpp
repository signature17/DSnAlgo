// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// Give n numbers of student and ch number of chocolated , find the left over chocolate if i student given i chocolates in circular way.
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;


void solve(){
	ll n , ch;
	cin >> n >> ch;
	ll k = (n *(n + 1))/ 2;
	ll t = ch % k;
	int i = 1;
	while(t >= i){
		t -= i;
		i++;
	}
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