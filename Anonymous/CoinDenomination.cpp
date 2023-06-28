/*
n=10
return minimum number of  coin such that we can make all the denominations

1  2   3     4    5    6     7     8     9    10
1  2   2+1   4   4+1  4+2   4+2+1  8    8+1   8+2
*/

#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int i=1;
    int count=0;
    while(i<=n){
       if(count<i){
        ans++;
        count=count+i;
       }
       i++;
    }
    cout<<ans;
}
