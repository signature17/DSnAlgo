// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// save ironman - gfg
// takeaway - cin.ignore() , isalnum , input of such string
#include "bits/stdc++.h"
using namespace std;
 
using ll = long long;
 
const ll inf = 1e18;
const int N = 2 * 1e5 + 10;

ll res;
ll a[N];

bool ispali(string s) { 
    int l = 0; 
    int h = s.size() - 1; 
    
    while (h > l) 
    { 
        if (s[l++] != s[h--]) { 
            return false ; 
        } 
    } 
    return true; 
}

void solve(){
	string str , t;
    getline(cin, str);
	for(int i = 0 ; i < str.size() ; i++){
		if(isalnum(str[i])){
			t += tolower(str[i]);
		}
	}
	if(ispali(t)) cout << "YES\n";
	else cout << "NO\n";
	
}
 
int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin >> t;
    cin.ignore();
    while(t--){
    	solve();
    }
}
// GokuOp