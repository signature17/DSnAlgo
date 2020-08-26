// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// Equilibrium Index of Array i.e index at which left sum is equal to right array
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

void solve(){
	ll n , sum = 0;
	cin >> n;
	vector<int> v(n);
	//vector< pair< ll , ll> > vp;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
		sum += v[i];
	}
	ll leftsum = 0;
	for(int i = 0 ;i < n ; i++){
		sum -= v[i];
		if(leftsum == sum){
		    cout << i + 1 << "\n";
		    return;
		}
		leftsum += v[i];
	}
	cout << "-1\n";

	

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