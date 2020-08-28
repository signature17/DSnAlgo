// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// Rotate Matrix by 90 degree
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;
//rotate matrix clockwise - we need to reverse row after transpose 
/*void rotate(vector<vector<int>>& m) {
        int n = m.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                swap(m[i][j] , m[j][i]);
            }
        }
        for(int i = 0 ; i < n ; i++){
            reverse(m[i].begin() , m[i].end());
        }
}*/ 
// rotate matrix anticlockwise - we need to reverse the column after transpose
void rotate(vector<vector<int>>& m) {
        int n = m.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                swap(m[i][j] , m[j][i]);
            }
        }
        for (int i = 0; i < n ; i++) 
            for (int j = 0, k = n - 1; j < k; j++, k--) 
            swap(m[j][i], m[k][i]); 
}


void solve(){
	int n , x;
	cin >> n;
	vector<vector<int>> v;
	for(int i = 0 ; i < n  ; i++){
	    vector<int> vt;
		for(int j = 0 ; j < n ; j++){
			cin >> x;
			vt.push_back(x);
		}
		v.push_back(vt);
	}
	rotate(v);
	for(int i = 0 ; i < n  ; i++){
	    vector<int> vt;
		for(int j = 0 ; j < n ; j++){
			cout << v[i][j] << " ";
		}
		//cout << "\n";
		
	}
	cout << "\n";
	 
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