// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// n square approach , n logn and then this solution.
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

 bool containsDuplicate(vector<int>& nums) {
    return nums.size() > set<int>(nums.begin(), nums.end()).size();
}



void solve(){
	int n ;
	cin >> n;
	std::vector<int> v(n) , ans;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	if(containsDuplicate(v)) cout << "Yes\n";
	else cout << "No\n";
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