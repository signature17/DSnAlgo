// round a number given in form of string to nearest multiple of 10
// yaha ek dikat aa rhe the char to ek increment karna tha wha sidha s[i]++ se kaam ho gya, yeh phele baar huwa h toh acha laga

#include "bits/stdc++.h"
using namespace std;
int main()
 {
     int t;
     cin >> t;
	while(t--){
	    string s;
	    int car = 0;
	    cin >> s;
	    int k = s[s.length() - 1]-'0';
	    if(k > 5){
	        car = 1;
	        s[s.length() - 1] = '0';
	        int i = s.length() - 2;
	        //cout << s << endl;
	        while(i >= 0 and car ==1){
	            int t = s[i] -'0';
	            //cout << t << endl;
	            if(t == 9){
	                s[i] = '0';
	                car = 1;
	            }
	            else{
	                
	                s[i]++;
	                car = 0;
	            }
	            i--;
	        }
	        
	        if(i < 0 and car == 1){
	            cout << 1 ;   
	        }
	        cout << s << endl;
	 
	    }
	    else{
	        s[s.length() - 1] = '0';
	        cout << s << endl;
	    }
	    
	}
}