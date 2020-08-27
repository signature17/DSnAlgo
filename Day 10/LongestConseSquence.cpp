// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// nlogn approach but O(N) approach using unordered set that i will figure out asap.
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

int findLongestConseqSubseq(int a[], int n){
    sort(a , a + n);
    int t = a[0];
    int cnt = 1 , mx = 1;
    //for(int i = 0 ;i < n ; i++) cout << a[i] << " ";
    //cout << endl;
    for(int i = 1 ; i < n ; i++){
        if(t + 1 == a[i]){
            cnt++;
            t = a[i];
        }
        else if(a[i] == a[i - 1]) continue;
        else{
            
            cnt = 1;
            t = a[i];
        }
        mx = max(cnt , mx);
    }
    return mx;
}

void solve(){
	int n ;
	cin >> n;
	int a[n];	
	for(int  i = 0 ; i < n ; i++) cin >> a[i];
	cout << findLongestConseqSubseq(a , n) << "\n";

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