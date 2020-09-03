// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// K anagrams
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

bool areKAnagrams(string s , string t , int k){
    //add code here.
    if(s.length() != t.length()) return false;
    else{
        int hsh1[26]= {0} , hsh2[26] = {0};
        for(int i = 0 ; i < s.size() ; i++){
            hsh1[s[i]- 'a']++;
        }
        for(int i = 0 ; i < t.size() ; i++){
            hsh2[t[i]- 'a']++;
        }
        int c = 0;
        for(int i = 0 ; i < 26 ; i++){
            //cout << hsh2[i] << " " << hsh1[i] << endl;
            //if(hsh2[i] != 0 && hsh1[i] == 0) c += hsh1[i];
            c += abs(hsh1[i] - hsh2[i]);
            //else c++;
        }
        c = c / 2;
        //cout << c << endl;
        if(c <= k ) return true;
        else return false;
    }
}


void solve(){
	string s , t;
	cin >> s >> t;
	int k;
	cin >> k;
	cout << areKAnagrams(s , t , k) << "\n";
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