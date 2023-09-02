#include<iostream>
using namespace std;

int gcd(int a,int b){
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    int ans=gcd(n1,n2);
    cout<<ans;
}