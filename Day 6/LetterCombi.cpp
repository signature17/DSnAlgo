// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// Letter Combination of Phone Number
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

vector<string> letterCombinations(string digits) {
        vector<string> ans;
        
        if(digits.size() == 0) return ans;
        string mp[10] = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv","wxyz"};

        ans.push_back("");
        for (int i = 0; i < digits.size(); i++){
            vector<string> temp;
            string ch = mp[digits[i] - '2'];
            for (int x = 0; x < ch.size(); x++)
                for (int t = 0; t < ans.size() ; t++)
                    temp.push_back(ans[t] + ch[x]);
            ans = temp;
        }
        return ans;
}

void solve(){
	string s;
	cin >> s;
	vector<string> ans;
	ans = letterCombinations(s);
	for(auto i : ans){
		cout << i << " ";
	}
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