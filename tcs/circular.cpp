#include<iostream>
int Circular(int n){
    int ans=1;
    while(n>0){
        ans=ans*n;
        n--;
    }
    return ans;
}

using namespace std;
int main(){
    int n;
    cin>>n;
    Circular(n);
}