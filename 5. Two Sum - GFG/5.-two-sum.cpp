// { Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
// User function template for C++

// A[] : the input array of positive integers
// N : size of the array arr[]
// X : the required sum
class Solution
{
    public:
    bool keypair(vector<int> A, int N, int X)
    {
        // Your code goes here
        unordered_map<int,int> hash;
         int n = A.size();
        
        for(int i=0;i<=n-1;i++){
         int temp=X-A[i];
            if(hash.find(temp)!=hash.end())
                return true;
            
        else
            hash[A[i]]++;
        }
        return false;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> array(n);
        Solution ob;
        
        for (int i = 0; i < n; i++) cin >> array[i];
            cout << (ob.keypair(array, n, x) ? "Yes" : "No") << "\n";
    }
    return 0;
}
  // } Driver Code Ends