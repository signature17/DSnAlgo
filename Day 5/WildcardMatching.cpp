// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// Wild card Matching always people get confused with * 
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

bool go(string st , string pt , int n , int m){
        if(m == 0) return (n == 0);
        bool dp[n + 1][m + 1];
        memset(dp , false , sizeof(dp));
        dp[0][0] = true;
        for (int j = 1; j <= m; j++) 
            if (pt[j - 1] == '*')  dp[0][j] = dp[0][j - 1];
        
        for(int i = 1 ; i <= n ;i++){
            for(int j = 1 ; j <= m ; j++){
                if(pt[j - 1] == st[i - 1] or pt[j - 1] == '?') dp[i][j] = dp[i - 1][j - 1];
                else if(pt[j - 1] == '*') dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
                else dp[i][j] = false;
            }
        }
        return dp[n][m];
}

void solve(){
	string str, ptr;
	cin >> str >> ptr;
	cout << go(str , ptr , str.length() , ptr.length()) << "\n";

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