
// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// Merge interval - famous interview question
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;


void solve(){
	int n , x , y;
	cin >> n;
	vector<pair<int , int> >vp , ans;
	for(int i = 0 ; i < n ; i++){
		cin >> x >> y;
		vp.push_back({x , y});
	}
	sort(vp.begin() , vp.end());
	ans.push_back(vp[0]);

	for(int i = 1 ;i < vp.size() ; i++){
		if(ans.back().second >= vp[i].first){
		    ans.back().second = max(ans.back().second , vp[i].second);
		}
		else ans.push_back(vp[i]);
	}
	for(auto i : ans) cout << i.first << " " << i.second << " ";
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