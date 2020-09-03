// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// Finding the Peak Element in logn time - peak is not smaller than any of it neighbour , our program should return one such element index
// binary search approach
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

int peakElement(int nums[], int n){
    int low = 0;
    int high = n - 1;
    if(n == 1) return 0;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(mid > 0 and mid < n - 1){
            if(nums[mid] > nums[mid - 1] and nums[mid] > nums[mid + 1])
                return mid;
            else if(nums[mid] < nums[mid - 1]){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        else if(mid == 0 ){
            if(nums[mid] > nums[mid + 1]) return 0;
            else return 1;
        }
        else if(mid == n - 1){
                //cout << "hello";
            if(nums[mid] > nums[mid - 1]) {
                    //cout << "pp";
                return n - 1 ;
                    
            }
            else return n - 2;
        }
    }
        return 0;
}

void solve(){
	int n ;
	cin >> n ;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	cout << peakElement(a , n) << "\n";
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