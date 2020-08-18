// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// finding missing and repeating number 1 to N
// three approach - nlogn , (n , n) , (n)
// (n) approach , mathematics
#include "bits/stdc++.h"
using namespace std;
 
using ll = long long;
 
const ll inf = 1e18;
const int N = 2 * 1e5 + 10;

ll res;
void solve(){
	ll n , x , flag = 0 , sum = 0  , a1 , a2;
	cin >> n;
    ll a[n + 1];
	for(int i = 0 ; i < n ; i++){
	   cin >> a[i];
	}
	
    ll sumn= (n * ( n + 1) ) /2, sumnn = (n * (n +1) *(2*n +1) )/6; 
    ll mN =0, rN=0; 
      
    for(int i=0 ; i< n; i++){ 
       sumn -= a[i]; 
       sumnn -= a[i]*a[i]; 
    } 
      
    mN = (sumn + sumnn/sumn)/2; 
    rN = mN - sumn; 
    cout << rN << " " << mN << "\n";
      
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