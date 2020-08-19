// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
#include "bits/stdc++.h"
using namespace std;
 
using ll = long long;
 
const ll inf = 1e18;
const int N = 2 * 1e5 + 10;

ll res;
ll a[N];

string revWord(string s) {
        
        stack<string> st;
        string x = "";
        for(int i=0;i<s.length();i++){
            if(s[i] == '.' && x.length() != 0){
                
                st.push(x);
                x = "";
            }
            else{
                if(s[i] != '.') x += s[i];
            }
        }
        
        if(x.length() != 0 )st.push(x);
        string ans = "" , pt = "";
        while(!st.empty()){
            pt = st.top();
            ans += pt;
            if(st.size()!= 1)ans += ".";
            st.pop();
            //System.out.println(pt);
            
        }
        return ans;
}


void solve(){
	string s;
	cin >> s;
	cout << revWord(s) << "\n" ;
	
}
 
int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--){
    	solve();
    }
}
// GokuOp