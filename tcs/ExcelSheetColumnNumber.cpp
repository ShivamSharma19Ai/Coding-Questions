class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        for(int i=0;i<columnTitle.size();i++){
            ans=ans*26;
            ans=ans+int(columnTitle[i]-'A'+1);
        }
        return ans;
    }
};