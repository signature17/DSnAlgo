// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// application of kadane's algorithm
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

ll maxSubArraySum(vector<ll> a) { 
   ll max_so_far = a[0]; 
   ll curr_max = a[0]; 
  
   for (int i = 1; i < a.size() ; i++) 
   { 
        curr_max = max(a[i], curr_max+a[i]); 
        max_so_far = max(max_so_far, curr_max); 
   } 
   return max_so_far; 
}

void solve(){
	ll n , k , sum = 0;
	cin >> n >> k;
	vector<ll> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
		sum += v[i];
	}
	if(k == 1){
	    cout << maxSubArraySum(v) <<  "\n";
	    return;
	}
	for(int i = 0 ; i < n ; i++){
		v.push_back(v[i]);
	}
	
	ll x = maxSubArraySum(v);
	if(sum > 0){
	  x += (k - 2) * sum ; 
	}
	cout << x << "\n";
	
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