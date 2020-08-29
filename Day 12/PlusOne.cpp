// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

vector<int> plusOne(vector<int>& dig) {
    vector<int> ans;
    int n = dig.size();
    int flag = 0;
    for(int i = n - 1 ; i>=0 ; i--){
   	    if(dig[i] < 9 and flag == 0){
            ans.push_back(dig[i] + 1);
            flag = 1;
        }
        else if(dig[i] == 9 and flag == 0){
            ans.push_back(0);
        }
        else{
            ans.push_back(dig[i]);
        }
    }
    if(flag == 0) ans.push_back(1);
    reverse(ans.begin() , ans.end());
        //for(auto i : ans) cout << i << " ";
    return ans;
}


void solve(){
	int n ;
	cin >> n;
	std::vector<int> v(n) , ans;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	ans = plusOne(v);
	for(auto i : ans) cout << i << " ";
	cout << "\n";
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