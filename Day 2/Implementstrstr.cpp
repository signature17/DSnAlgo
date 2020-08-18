// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// implement strstr - a pointer points to the first character of the found s2 in s1 otherwise a null pointer if s2 is not present in s1. If s2 points to an empty string, s1 is returned.
#include "bits/stdc++.h"
using namespace std;
 
using ll = long long;
 
const ll inf = 1e18;
const int N = 2 * 1e5 + 10;

ll res;
ll a[N];
/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */

int strstr(string s, string x){
     int ans = -1 , xp = 0 , start;
     for(int i = 0 ; i < s.size() ; i++){
         if(s[i] == x[xp]){
             if(xp == 0){
                 start = i;
             }
             xp++;
             if(xp == x.size()){
                 ans = start;
                 break;
             }
             
         }
         else{
             xp = 0;
             ans = -1;
         }
     }
     return ans;
}

void solve(){
	string s  , t;
	cin >> s >> t;
	cout << imstrstr(s , t);

}
 
int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin >> t;
    while(t--){
    	solve();
    }
}
// GokuOp