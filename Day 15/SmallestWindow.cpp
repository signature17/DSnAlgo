// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
//Given a string S and text T. Output the smallest window in the string S having all characters of the text T. 
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

bool check(int a[], int b[]){
    for(int i = 0; i < 26 ; i++){
        if(a[i] < b[i])
            return false;
    }
    return true;
}

void solve(){
	string s , t;
	cin >> s >> t;
	int n = s.size();
	int m = t.size();
	if(m > n){
		cout << -1 <<"\n";
		return;
	}
	string ans= "";
    int cnt = 0;
    int hsh_s[26] = {0} , hsh_p[26] = {0};
    for(auto i : t) hsh_p[i - 'a']++;
    int mn = INT_MAX;
    int start=0;
    for(int i = 0; i < n ; i++){
        hsh_s[s[i]-'a']++;
        while(check(hsh_s, hsh_p)){
            int k = i - start + 1;
            
            if(k < mn){
                mn = i - start+1;
                ans = s.substr(start, mn);
            }
            hsh_s[s[start]-'a']--;
            start++;
        }
    }
    if(ans=="")cout<<-1<<endl;
    else cout<<ans<<endl;

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