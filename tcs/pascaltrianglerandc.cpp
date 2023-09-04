#include<iostream>
using namespace std;
int nCr(int n,int r){
    long long int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res; 
}
int main(){
    int r;
    int c;
    cin>>r>>c;
    cout<<nCr(r-1,c-1);
}