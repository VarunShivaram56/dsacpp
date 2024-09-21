#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
    if(str.find("Character")!= string::npos)
        return 1;
    else if(str.find("Integer")!= string::npos)
        return 4;
    else if(str.find("Long")!= string::npos)
        return 8;
    else if(str.find("Float")!= string::npos)
        return 4;
    else if(str.find("Double")!= string::npos)
        return 8;
    else
        return -1;
    
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}