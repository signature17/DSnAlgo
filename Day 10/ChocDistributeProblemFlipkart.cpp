// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// n pocket having chocolate and m student , each student get one packet
// find the min difference btwn max and min chocolated given to m student
// https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0/?track=interview-mathematical&batchId=117
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;


void solve(){
	ll n , m;
	cin >> n;
	ll a[n];
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	cin >> m;
	sort(a , a + n);
	ll mn = INT_MAX;
	for(int i = 0 ; i + m - 1 < n ; i++){
		ll k = a[i + m - 1] - a[i];
		mn = min(mn , k);
	}
	cout << mn << "\n";
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