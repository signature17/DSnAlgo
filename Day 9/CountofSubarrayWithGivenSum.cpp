// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
//Count the number of subarray with given sum , O(n) , O(n)
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

void solve(){
	ll n , sum;
	cin >> n;
	vector<int> v(n);
	vector< pair< ll , ll> > vp;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	cin >> sum;
	map<ll , ll> mp;
	int cnt = 0;
	int curr_sum = 0;
	for(int i = 0 ; i < n ; i++){
		curr_sum += v[i];
		if(curr_sum == sum){
			cnt++;
		}
		if (mp.find(curr_sum - sum) != mp.end()){ 
            cnt +=mp[curr_sum - sum]; 
        }
        mp[curr_sum]++;
	}
	cout <<cnt << "\n";

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