class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans=0;
        int prevequals=0;
        int currequals=1;
        for(int i=0;i+1<s.length();i++){
            if(s[i]==s[i+1]){
                currequals++;
            }
            else{
                ans+=min(prevequals,currequals);
                prevequals=currequals;
                currequals=1;
            }
        }
        return ans+min(currequals,prevequals);
    }
};