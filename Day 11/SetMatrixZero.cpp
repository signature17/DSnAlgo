// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// set matrix to zero inplace O(n2) approach
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

void setZeroes(vector<vector<int>>& mat){
        int n = mat.size();
        int m = mat[0].size();
        int row_flag = 1 ,col_flag = 1;
        //cout << n << " " << m << endl;
        for(int i = 0 ; i <  n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(mat[i][j] == 0 and i == 0) row_flag = 0;
                if(mat[i][j] == 0 and j == 0) col_flag = 0;
                if(mat[i][j] == 0){
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
             }
        }
        for(int i = 1 ; i < n ; i++){
            for(int j = 1 ; j < m ; j++){
                if(mat[i][0] == 0  or mat[0][j] == 0) mat[i][j] = 0;
            }
        }
        //cout << row_flag << " " << col_flag ;
        if(!row_flag)
            for(int i = 0 ; i < m ; i++) mat[0][i] = 0;
        if(!col_flag)
            for(int i = 0 ; i < n  ; i++) mat[i][0] = 0;
        
}

void solve(){
	int n , x , m;
	cin >> n >> m;
	vector<vector<int>> v;
	for(int i = 0 ; i < n  ; i++){
	    vector<int> vt;
		for(int j = 0 ; j < m ; j++){
			cin >> x;
			vt.push_back(x);
		}
		v.push_back(vt);
	}
	setZeroes(v);
	for(int i = 0 ; i < n  ; i++){
		for(int j = 0 ; j < m ; j++){
			cout << v[i][j] << " ";
		}
		cout << "\n";
		
	}
	cout << "\n";
	 
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