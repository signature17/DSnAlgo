// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// Majority Element - occurence more than n/2 
// sort approach , hash approach and Moore voting algorithm;
//two step algo
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;


void solve(){
	ll n ;
	cin >> n;
	int a[n];
	for(int i = 0 ;i < n  ; i++) cin >> a[i];
	int mi = 0 , cnt = 1;
	for(int i = 1; i < n ;i++){
	    if (a[mi] == a[i]) cnt++;
	    else cnt--;
	    if(cnt == 0){
	        cnt = 1;
	        mi = i;
	    }
		
		//cout << me << " "<< cnt<< endl;
	}
	int ans = 0;
	//cout << me;
	for(int i = 0 ; i < n ; i++){
	    if(a[mi] == a[i]) ans++;
	}
	if(ans > (n/ 2)) cout << a[mi] << "\n";
	else cout << "-1\n";

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