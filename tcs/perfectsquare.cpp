 bool isPerfectSquare(int num) {
       int s=0;
       if(num==1){
           return true;
       }
       int e=num/2;
       while(s<=e){
           long long int m=s+((e-s)>>1);
           if(m*m==num){
               return true;
           }
           if(m*m>num){
               e=m-1;
           }
           else{
               s=m+1;
           }
       }
       return false;
    }