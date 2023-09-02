#include <iostream>
using namespace std;

bool isperfect(int n){
    if(n==0 || n==1){
        return false;
    }
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<isperfect(n);
}