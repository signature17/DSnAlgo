// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// compress string
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

int compress(vector<char>& ch){
    int n = ch.size();
    if(n < 2) return n;

	int  i = 0;
	int  j = 0;

	while(i < n) {
		ch[j] = ch[i];
		int cnt = 0;
		while(i < n && ch[i] == ch[j]) {
			cnt++;
			i++;
		}
		if(cnt == 1) j++;
		else {
			string s = to_string(cnt);
			for(auto i : s)
				ch[++j] = i;
				j++;
			}
	}
    for(auto i : ch) cout << i << " ";
	return j;
}

void solve(){
	ll n ;
	std::vector<char> v(n);
	for(int i  = 0 ; i < n ; i++){
		cin >> v[i];
	}
	cout <<compress(v) << endl;
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