#include<iostream>
#include<map>
using namespace std;
void occ(string a){
    map<char,int> mpp;
    for(int i=0;i<a.length();i++){
        mpp[a[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<it.second<<" ";
    }
}
int main(){
    string a;
    cin>>a;
    occ(a);
}