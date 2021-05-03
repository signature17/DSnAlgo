#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;


void solve(){
	ll n;
	cin >> n;
	ll a[n], b[n];
	vector< pair<int, int> > vp;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	for(int i = 0 ; i < n ; i++){
		cin >> b[i];
	}
	
	sort(a , a + n);
	sort(b , b + n);
	int min_plat = 1;
	int max_needed = 1;
	int i = 1 , j = 0;
	while(j != n){
		if(a[i] > b[j]){
			min_plat--;
			j++;
		}
		else{
			min_plat++;
			max_needed =  max(min_plat , max_needed);
			i++;
		}
	}
	cout << max_needed << "\n";
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