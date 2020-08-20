// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// matrix is sorted row wise , find the count of pairs whose sum is equal to given volume.
#include "bits/stdc++.h"
using namespace std;
 
using ll = long long;
 
const ll inf = 1e18;
const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
	ll n , x , k;
	cin >> n >> k;
    unordered_set<int> us;
	int mat1[n][n] , mat2[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> mat1[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> x;
            us.insert(x);
            mat2[i][j] = x;

        }
    }

    int anscnt = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            int t = k - mat1[i][j] ; 
            if(us.find(t) != us.end()){
                cout << t << " " << mat1[i][j] << endl;
                anscnt++;
            }
        }
    }
    cout << anscnt << "\n";
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
// 80 0
// 48 32
// 49 31
// 68 12
// 48 32
// 7 73