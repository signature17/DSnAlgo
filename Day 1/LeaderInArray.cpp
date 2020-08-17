// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// Leader in Array - Mathematics
//6
//16 17 4 3 5 2 output - 17 5 2
#include "bits/stdc++.h"
using namespace std;
 
using ll = long long;
 
const ll inf = 1e18;
const int N = 2 * 1e5 + 10;

ll res;


void solve(){
	ll n ;
	cin >> n;
	ll a[n];
	vector<int> v;
	for(int i = 0 ; i < n ;i++){
		cin >> a[i];
	}
	v.push_back(a[n - 1]);
	int lead = a[n - 1];
	for(int i = n - 2 ; i >= 0 ; i--){
		if(a[i] >= lead){
			lead = a[i];
			v.push_back(a[i]);
		}
	}
	for(int i = v.size() - 1 ; i >= 0 ; i--){
		cout << v[i] << " ";
	}
	cout << "\n";
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