// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// the idea behing this solution is that the element at even number should be grater than its neighbour
// if not swap the element
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;
// this method is just used to maintain order with use of flag
/*void solve(){
	ll n , sum = 0;
	cin >> n;
	vector<int> v(n);
	//vector< pair< ll , ll> > vp;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
		sum += v[i];
	}
	int flag = true;
	for(int i = 0 ; i < n - 1 ; i++){
		if(flag){
			if(v[i] > v[i + 1]) swap(v[i] , v[i + 1]);
		}
		else{
			if(v[i]  < v[i + 1]) swap(v[i] , v[i + 1]);	
		}
		flag = !flag;

	}

	for(auto i : v) cout << i << " ";
	cout << "\n";
	

}*/

void solve(){
	ll n , sum = 0;
	cin >> n;
	vector<int> v(n);
	//vector< pair< ll , ll> > vp;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
		sum += v[i];
	}
	int flag = true;
	for(int i = 1 ; i < n - 1 ; i += 2){
		if(v[i] < v[i - 1]) swap(v[i], v[i - 1]);
		if(v[i] < v[i + 1]) swap(v[i], v[i + 1]);

	}
    if(n % 2 ==0){
        if(v[n - 1] < v[n - 2]) swap(v[n - 1] , v[n - 2]);
    }
	for(auto i : v) cout << i << " ";
	cout << "\n";
	

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