// Problem - Minimum distance between two numbers 
// Topic - Array
//Input: arr[] = {1, 2}, x = 1, y = 2
//Output: Minimum distance between 1 



#include "bits/stdc++.h"
using namespace std;
 
using ll = long long;
 
const ll inf = 1e18;
const int N = 2 * 1e5 + 10;

ll res;
ll a[N];

int minDist(int a[], int n, int x, int y) {
    int prev = -1 , mn = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(a[i] == x || a[i] == y){
            if(prev != -1 and a[i] != a[prev]){
                mn = min(mn , i - prev);
            }
            prev = i;
        }
    }
    if(mn == INT_MAX) return -1;
    else return mn;
}

void solve(){
	int n , x , y;
	cin >> n ;
	int a[n];
	for(int i = 0 ;i < n ;i++){
		cin >> a[i];
	}
	cin >> x >> y;
	cout << minDist(a , n , x , y);
	
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