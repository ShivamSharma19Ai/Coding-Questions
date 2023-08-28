 int climbStairs(int n) {
        vector<int> array(n,0);
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        array[0]=1;
        array[1]=2;
        for(int i=2;i<n;i++){
            array[i]=array[i-1]+array[i-2];
        }
        return array[n-1];
    }