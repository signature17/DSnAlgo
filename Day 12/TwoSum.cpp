// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

// two pass solution using map
/*vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int , int > mp;
        for(int i = 0; i < n ; i++){
            mp[nums[i]] = i + 1;
        }
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x = mp[target - nums[i]];
            cout << x << target - nums[i] << endl;
            if(x > 0  && x - 1 != i)
            {
                v.push_back(i );
                v.push_back(x-1);
                return v;
            }
        }
        return v;
}*/


// one pass hash solution
vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v;
        map<int , int > mp;
        for(int i = 0; i < n ; i++){
            int comp = target - nums[i];
            if(mp.find(comp)!= mp.end()){
                v.push_back(mp.find(comp)->second);
                v.push_back(i); 
                return v;
            }
            mp[nums[i]] = i ;
        }
        
        return v; 
}

void solve(){
	int n , x , tar;
	cin >> n >> tar;
	vector<int> v;
	for(int i = 0 ; i < n  ; i++){
	    cin >> x; 
	    v.push_back(x);
	}
	
	vector<int> ans;
	ans = twoSum(v , tar);
	if(ans.size() == 2) cout << "Yes\n";
	else cout << "No\n";
	 
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