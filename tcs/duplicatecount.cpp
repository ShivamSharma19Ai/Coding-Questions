#include<iostream>
#include<map>

using namespace std;

void ans(string s){
    map<char,int> mpp;
    for(auto c:s){
        mpp[c]++;
    }
    for(auto c:mpp){
        if(c.second>1){
            cout<<c.first<<", count ="<<c.second;
        }
    }
}

int main(){
    string a;
    cin>>a;
    ans(a);
}