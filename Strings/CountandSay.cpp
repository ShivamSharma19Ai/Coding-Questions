class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        if(n==2){
            return "11";
        }
        string a=countAndSay(n-1);
        a=a+'&';
        int count=1;
        string ans="";
        for(int i=1;i<a.length();i++){
           if(a[i]==a[i-1]){
               count++;
           }
           else{
              ans=ans+to_string(count);
              ans=ans+a[i-1];
              count=1;
           }
        }
        return ans;
    }
};