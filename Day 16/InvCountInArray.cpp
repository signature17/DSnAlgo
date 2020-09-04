// Do not practice until you get it right, but keep practicing until you can’t get it wrong.
#include "bits/stdc++.h"
using namespace std; 
using ll = long long;
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll res;


ll merge(int a[] , int temp[] , int left , int mid , int right){
	int i = left , j = mid , k =  left;
	ll inv_cnt = 0;
	while((i <= mid - 1) and j <= right){
		if(a[i] <= a[j]){
			temp[k++] = a[i++];
		}
		else{
			temp[k++] = a[j++];
			inv_cnt += (mid - i);
		}
	}
	while (i <= mid - 1) temp[k++] = a[i++]; 
    while (j <= right) temp[k++] = a[j++]; 
    for (i = left; i <= right; i++) a[i] = temp[i];
    return inv_cnt;
}


ll merge_sort(int arr[], int temp[], int left, int right) 
{ 
    int mid; 
    ll inv_count = 0; 
    if (right > left) {
        mid = (right + left) / 2; 
        inv_count += merge_sort(arr, temp, left, mid); 
        inv_count += merge_sort(arr, temp, mid + 1, right); 
  
      
        inv_count += merge(arr, temp, left, mid + 1, right); 
    } 
    return inv_count; 
}


void solve(){
	ll n ;
	cin >> n;
	int a[n] , temp[n];
	for(int i = 0 ; i  < n ; i++)cin >> a[i];
	cout << merge_sort(a , temp , 0 , n - 1) << "\n";
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