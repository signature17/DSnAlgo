// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// Kadane Algorith - The jist of this algorithm is to keep the subarray till its sum is positive
//O(n) - dp approach , o(n3) brute forces , eliminating one loop it become O(n2).
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

int maxSubArray(vector<int>& a){
    int max_so_far = INT_MIN; 
    int curr_max = 0; 
    int start = 0 , end = 0 , s = 0;
    for(int i = 0 ; i < a.size() ; i++){
        curr_max += a[i];
        if(max_so_far < curr_max){
            max_so_far = curr_max
            start = s;
            end = i;
       	} 
            //max_so_far = max(curr_max , max_so_far);
        if(curr_max < 0){
            curr_max = 0;
            s = i + 1;
        }           
    }
    cout << start << " " << end;
    return max_so_far;

}

void solve(){
	ll n;
	cin >> n;
	vector<int> v(n);
	vector< pair<int, int> > vp;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	cout << maxSubArray(v);

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