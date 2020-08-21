// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// Group Anagrams
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;
vector<int> groupAnagrams(vector<string>& strs) {
        vector<int> ans;
        map<string , vector<string>> mp;
        for(int i = 0 ;i < strs.size() ;i++){
            string k = strs[i];
            sort(strs[i].begin() , strs[i].end());
            mp[strs[i]].push_back(k);
        }
        //vector<string> v;
        for(auto i : mp){
            int k = i.second.size();
            ans.push_back(k);
        }
        sort(ans.begin() , ans.end());
        return ans;
}
void solve(){
	ll n ;
	cin >> n;
	vector<string> v(n);
	std::vector<int> ans;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	ans = groupAnagrams(v);
	for(auto i : ans) cout << i << " ";

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