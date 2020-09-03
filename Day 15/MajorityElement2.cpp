// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// find the element which occurs more than n/3 time.
// Moore Voting Algorithm - O(n) aproach
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

vector<int> majorityElement(vector<int>& nums) {
    vector<int> ans;
    int num1 = -1 , num2 = -1 , c1 = 0 , c2 = 0;
    for(auto i : nums){
        if(i == num1) c1++;
        else if(i == num2) c2++;
        else if(c1 == 0){
            num1 = i;
            c1 = 1;
        }
        else if(c2 == 0){
            num2 = i;
            c2 = 1;
        }
        else{
            c1--;
            c2--;
        }
    }
    c1 = 0 , c2 = 0;
    for(int i : nums){
        if(i == num1) c1++;
        else if(i == num2) c2++;
    }
    if(c1 > (nums.size()/3)) ans.push_back(num1);
    if(c2 > (nums.size()/3)) ans.push_back(num2);
    return ans;
}


void solve(){
	int n;
	cin >> n;
	std::vector<int> v(n) , ans;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	ans = majorityElement(v);
	for(auto i : ans) cout << i << " ";
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