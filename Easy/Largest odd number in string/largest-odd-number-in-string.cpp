//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {
        string maxi="";
        for(int i=s.length()-1;i>=0;i--){
            int num=s[i]-'0';
            if(num%2!=0){
                return s.substr(0,i+1);
            }
        }
        return "";
        // your code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends