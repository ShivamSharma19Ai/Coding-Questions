#include<iostream>
using namespace std;

int main(){
    int r;
    cin>>r;
    int ans=1;
    cout<<ans;
    for(int i=1;i<r;i++){
        ans=ans*(r-i);
        ans=ans/i;
        cout<<ans;
    }
    
}
// int nCr(int n,int r){
//     long long int res=1;
//     for(int i=0;i<r;i++){
//         res=res*(n-i);
//         res=res/(i+1);
//     }
//     return res; 
// }
// int main(){
//     int r;
//     cin>>r;
//     int n=r+1;
//     for(int i=1;i<n;i++)
//     cout<<nCr(r-1,i-1)<<" ";
// }