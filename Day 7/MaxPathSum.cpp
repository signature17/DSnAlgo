// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
//max path sum - switch only when element are same in both array 
// max sum you can find from start to end of the array
// similar to merge process 
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;


 int max_path_sum(int a[], int b[], int l1, int l2){
     int sum1 = 0 , sum2 = 0 , ans = 0;
     int i = 0 , j = 0;
     while(i < l1 and j < l2){
         if(a[i] < b[j]) sum1 += a[i++];
         else if(a[i] > b[j]) sum2 += b[j++];
         else{
             ans += max(sum1 , sum2);
             //cout << ans << endl;
             sum1 = 0 , sum2 = 0;
             while(i < l1 and j < l2 and a[i] == b[j]){
                 ans += a[i++];
                 j++;
             }
         }
     }
     while(i < l1) sum1 += a[i++];
     while(j < l2) sum2 += b[j++];
     ans += max(sum1 , sum2);
     return ans;
     

}

void solve(){
	ll n , cnt = 0;
	cin >> n >> m;
	int a[n] , b[n];
	for(int i = 0 ;i < n  ; i++) cin >> a[i];
	for(int i = 0 ;i < m  ; i++) cin >> b[i];
	int ans = max_path_sum(a, b , m , n);
	cout << ans << "\n";

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