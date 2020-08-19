// dutch national flag algorithm
#include "bits/stdc++.h"
using namespace std;
 
using ll = long long;
 
const ll inf = 1e18;
const int N = 2 * 1e5 + 10;

/*void sortColors(vector<int>& nums) {
        int countz = 0 , counto = 0 , countt = 0;
        for(auto i : nums){
            if(i == 0) countz++;
            else if(i == 1) counto++;
            else countt++;
        }
        int  i = 0;
        while(countz){
            nums[i++] = 0;
            countz--;
        }
        while(counto){
            nums[i++] = 1;
            counto--;
        }
        while(countt){
            nums[i++] = 2;
            countt--;
        }
        //for(auto i : nums) cout << i << " ";
        //cout << "\n";
 }*/

ll res;
void solve(){
	int n , x , flag = 0 , ans , m;
	cin >> n;
	vector<int> v;
	for(int i = 0 ; i < n ; i++){
	    cin >> x;
	    v.push_back(x);
	}
	int low = 0;
	int high = n - 1;
	int mid = 0;
	while(mid <= high){
		switch(v[mid]){
			case 0: swap(v[low++] , v[mid++]);
			break;
			case 1: mid++;
			break;
			case 2: swap(v[mid] , v[high--]);
			break;
		}
	}
	for(auto i : v) cout << i << " ";
	cout << "\n";
	

	

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