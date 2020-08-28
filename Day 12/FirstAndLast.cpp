// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

int first(vector<int> a , int start , int end , int ele){
    int res = -1;
    while(start <= end){
        int mid = start + (end - start)/ 2;
        if(a[mid] > ele) end = mid -1;
        else if(a[mid] < ele) start = mid + 1;
        else{
            res = mid;
            end = mid - 1;
        }
    }
    return res;
}
int last(vector<int> a , int start , int end , int ele){
    int res = -1;
     
    while(start <= end){
        int mid = start + (end - start)/ 2;
        if(a[mid] > ele) end = mid -1;
        else if(a[mid] < ele) start = mid + 1;
        else{
            res = mid;
            start = mid + 1;
        }
    }
    return res;
}
vector<int> searchRange(vector<int>& nums, int x) {
     int n =  nums.size();
        
	 vector<int> ans;
   	 ans.push_back(first(nums, 0 , n - 1 , x)); 
     ans.push_back(last(nums, 0 , n - 1 , x)); 
     return ans;
}


void solve(){
	int n , x;
	cin >> n;
	vector<int> v(n), ans;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	cin >> x;
	ans = searchRange(v , x);
	cout << v[0] << " " << v[1] << "\n";
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