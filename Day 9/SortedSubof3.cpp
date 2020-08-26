// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// sorted subsequence of length 3 o(n) best approach
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

bool increasingTriplet(vector<int>& arr) {
        int great = INT_MAX , greater = INT_MAX;
    
        for(auto i : arr){
            if(great >= i){
                great = i;
            }
            else if(greater >= i){
                greater = i;
            }
            else{
                return true;
             }
        }
        return false;
}

void solve(){
	ll n;
	cin >> n;
	vector<int> v(n);
	vector< pair<int, int> > vp;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	if(increasingTriplet(v)) cout<<"True\n";
	else cout <<"False\n";

}
 
int main(int argc, char const *argv[]){
	// take_input;
	fast;
    ll t = 1;
    //cin >> t;
    while(t--){
    	solve();
    }
}
// GokuOp