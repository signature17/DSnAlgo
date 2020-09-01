// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
//Given a string S, find length of the longest substring with all distinct characters.
//2
//abababcdefababcdab
//geeksforgeeks output - > 6  7
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;


void solve(){
    string s , t;
    cin >> s;
    int n = s.size();
    int mx = 0 , cnt = 0;
    map<char , pair<int , int> > mp;
    for(int i = 0 ; i < n ; i++){
    	if(mp[s[i]].first == 1){
    		mx = max(mx , cnt);
    		i = mp[s[i]].second;
    		//cout << mx << endl;
    		cnt = 0 ;
    		mp.clear();

    	}
    	else{
    		cnt++;
    		mp[s[i]] = {1 , i};
    		
    	}
    }
    mx = max(mx , cnt);
    cout << mx << "\n";
    
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