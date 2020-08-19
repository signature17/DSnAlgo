// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
//7
//1 2 3 4 5 6 7
//8 output 1 7 8, 2 6 8 , 3 5 8
#include "bits/stdc++.h"
using namespace std;
 
using ll = long long;
 
const ll inf = 1e18;
const int N = 2 * 1e5 + 10;

ll res;


void solve(){
	ll n , k;
	cin >> n;
	ll a[n];
	for(int i = 0 ; i < n ;i++) cin >> a[i];
	vector<pair<int , int> > vp;
	int low = 0 , high = n - 1;
	cin >> k;
	while(high > low){
		ll sm = a[high] + a[low];
		//cout << sm << endl;
		//low++ , high--;
		if(sm == k){
			vp.push_back({a[low] , a[high]});
			low++;
			high--;
		}
		else if(sm > k){
			high--;
		}
		else low++;
		//cout << low << " " << high << endl;
	}
	if(vp.size() != 0) for(auto i : vp) cout << i.first << " " << i.second << " " << k <<"\n";
	else cout<< "-1\n";


}
 
int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--){
    	solve();
    }
}
// GokuOp