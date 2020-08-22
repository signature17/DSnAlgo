// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// given an array count the possible traingle that can be formed by using array element
// o(n3) - naive approach , o(n2) - sort and two pointers
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;


void solve(){
	ll n , cnt = 0;
	cin >> n;
	int a[n];
	for(int i = 0 ;i < n  ; i++) cin >> a[i];
	sort(a , a + n);
	for(int i = n - 1 ; i >= 1 ; i--){
		int l = 0 , r = i - 1;
		while(l < r){
			if(a[l] + a[r] > a[i]){
				cnt += (r - l);
				r--;
			}
			else l++;
		}
	}
	cout << cnt << "\n";
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