string toHex(int num) {
        if(num==0){
            return "0";
        }
        string ans="";
        string hexCode="0123456789abcdef";
        unsigned int n=num;
        while(n>0){
            int rem=n%16;
            ans+=hexCode[rem];
            n/=16;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }