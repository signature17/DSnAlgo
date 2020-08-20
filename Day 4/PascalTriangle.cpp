// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
#include "bits/stdc++.h"
using namespace std;
 
using ll = long long;
 
const ll inf = 1e18;
const int N = 2 * 1e5 + 10;

ll res;
ll a[N];

vector<vector<int>> generate(int n) {
        vector<vector<int>> v(n);
        int i = 0;
        while(n--){
            vector<int> vv;
            if(i == 0){
                vv.push_back(1);
                
            }
            else if(i == 1){
                vv.push_back(1);
                vv.push_back(1);
            }
            else{
                //cout<< v[i - 1].size() << " " << i - 1;
                vv.push_back(1);
                for(int j = 0 ; j < v[i -1].size() - 1; j++){
                    int k = v[i-1][j] + v[i - 1][j + 1];
                    vv.push_back(k);       
                }
                vv.push_back(1);
                
            }
            v[i] = vv;
            i++;
            
            
        }
        return v;
        
}

void solve(){
	ll n ,  , k;
	cin >> n;
    int hsh[1001] = {0};
	int mat1[n][n] , mat2[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> mat1[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> x;
            hsh[x]++
            mat2[i][j] = x;

        }
    }
    cin >> k;
    int anscnt = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            int t = k - mat1[i][j] ; 
            if(hsh[t] > 0){
                hsh[t]--;
                anscnt++;
            }
        }
    }
    cout << anscnt << "\n";
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