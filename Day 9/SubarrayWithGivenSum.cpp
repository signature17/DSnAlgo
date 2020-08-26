// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// Sliding window technique use O(n) time
// if the current sum is greater tha given sum then slide our window

#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

void solve(){
	ll n , sum;
	cin >> n >> sum;
	vector<int> v(n);
	vector< pair< ll , ll> > vp;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	int curr_sum = 0 ,start = 0;
	for(int i = 0 ; i < n ; i++){
		curr_sum += v[i];
		while(curr_sum > sum && start < i ){
		    curr_sum -= v[start];
		    start++;
		}
		if(curr_sum == sum){
		    cout << start + 1 << " " << i + 1 << "\n";
		    return;
		}
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