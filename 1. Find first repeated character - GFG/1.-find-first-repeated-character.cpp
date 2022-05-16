// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{
    string result;
    set<char> set;
    
    for(int i=0;i<s.size();i++){
        if(set.find(s[i])==set.end()){
            set.insert(s[i]);
        }
        else{
            result.push_back(s[i]);
            return result;
        }
    }
    return "-1";
}