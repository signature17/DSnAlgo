// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// find three number in the given vector whose sum is equal to zero
// problem duplicate remove karne me aya , this question can be extended to find all triplets with given sum
// #done
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;


void solve(){
    int n , x; 
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a , a + n);
    vector<vector<int>> res;
    for (int i = 0; i < n - 2; i++) {
        if ((i > 0 ) and (a[i] == a[i - 1])) continue;
        int l = i + 1, r = n - 1;
        while (l < r) {
            int s = a[i] + a[l] + a[r];
            if (s > 0) r--;
            else if (s < 0) l++;
            else {
                res.push_back(vector<int> {a[i] , a[l], a[r]});
                while (l < r and a[l] == a[l+1]) l++;
                while (l < r and a[r] == a[r-1]) r--;
                l++; r--;
            }
        }
    }
    for(int i = 0 ; i < res.size() ; i++){
        cout << res[i][0] << " " << res[i][1] << " " << res[i][2] << "\n";
    }
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