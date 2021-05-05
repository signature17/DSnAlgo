//Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.


#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int maximumSumSubarray(int k, vector<int> &v , int n){
        
        int sum = 0;
        for(int i = 0 ; i < k ; i++){
            sum +=v[i];
        }
        int mx = sum , ip = 0;
        for(int i = k ; i < n ; i++){
            sum = sum - v[ip++] + v[i];
            mx = max(mx , sum);
        }
        return mx;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends