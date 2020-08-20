// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// next permutation stl implementation , brute force implementation (n!) and o(n) approach
#include "bits/stdc++.h"
using namespace std;
 
using ll = long long;
 
const ll inf = 1e18;
const int N = 2 * 1e5 + 10;

ll res;
ll a[N];

class Solution {
public:
    void nextPermutation(vector<int>& v) {
        if(v.size() <= 1) return;
        int i = v.size() - 2;
        while(i >= 0 and v[i] >= v[i + 1]){
            i--;   
        }
        if(i >= 0){
            int j =  v.size() - 1;
            while(v[j] <= v[i]) j--;
            swap(v[i] , v[j]);
        }
        //cout << i + 1 << endl;
        int t = v.size() -1;
        int pt = i + 1;
        while(t > pt){
            swap(v[pt++] , v[t--]);
        }
        
    }
};

void solve(){
    
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