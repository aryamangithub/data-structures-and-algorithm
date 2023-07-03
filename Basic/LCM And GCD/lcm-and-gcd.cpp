//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        
        long long gcd, lcm;
        long long n1 = A;
        long long n2 = B;
        vector<long long> ans;
        while(n1> 0 && n2 > 0){
            if(n1 > n2) 
                n1 = n1%n2;
            else n2 = n2%n1;
        }
        
        if(n1 == 0) gcd = n2;
        else gcd = n1;
        
        lcm = A*B/gcd;
        ans.push_back(lcm);
        ans.push_back(gcd);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends