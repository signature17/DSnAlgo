// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
// Find the median of Running Stream
// Concept behing it is too op
#include "bits/stdc++.h"
using namespace std;
 
using ll = long long;
 
const ll inf = 1e18;
const int N = 2 * 1e5 + 10;

ll res;
ll a[N];
int i = 0;
int med;
priority_queue<int> s; 
priority_queue<int,vector<int>,greater<int> > g;
void solve(){
    int n;
	cin >> n;
	if(i == 0){
		s.push(n);
		med = n;
		i++;
	}
	else{
		int x = n;
		if (s.size() > g.size()) 
        { 
            if (x < med) 
            { 
                g.push(s.top()); 
                s.pop(); 
                s.push(x); 
            } 
            else
                g.push(x); 
            //cout << s.top() << " " << g.top() << endl;
            med = (s.top() + g.top())/2; 
        }
        else if (s.size()==g.size()) 
        { 
            if (x < med) 
            { 
                s.push(x); 
                med = s.top(); 
            } 
            else
            { 
                g.push(x); 
                med = g.top(); 
            } 
        }
        else
        { 
            if (x > med) 
            { 
                s.push(g.top()); 
                g.pop(); 
                g.push(x); 
            } 
            else
                s.push(x); 
  
            med = (s.top() + g.top())/2; 
        } 


	}
	cout << med <<"\n";


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