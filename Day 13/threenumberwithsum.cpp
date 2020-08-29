// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
//sort and two pointer approach
//determine whether or not there exist three elements in A[] whose sum is exactly x.
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;


void solve(){
	int n , x; 
	cin >> n >> x;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	sort(a , a + n);
	for(int i = 0 ; i < n - 2 ; i++){
		int l = i + 1 , r = n - 1;
		while(l < r){
			int s = a[i] + a[l] + a[r];
			if(s == x){
				cout << 1 << "\n";
				return;
			}
			else if(s > x) r--;
			else l++;
		}
	}
	cout << 0 << "\n";
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