// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// Find the angle between minute and hour hand
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;

 bool containsDuplicate(vector<int>& nums) {
    return nums.size() > set<int>(nums.begin(), nums.end()).size();
}



void solve(){
	float h , m;
	cin >> h >> m;
	if (h == 12) h = 0; 
    if (m == 60){
      	m = 0;
      	//h += 1;
       	if(h > 12) h = h-12;
     }

    float hour_angle = 0.5 * (h * 60 + m); 
    float minute_angle = 6 * m; 
 
    float angle = abs(hour_angle - minute_angle); 
    cout << floor(min(360 - angle, angle)) << "\n"; 
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