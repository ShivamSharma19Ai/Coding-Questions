#include<iostream>
using namespace std;

string convert(string a){
    int count=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z'){
            count++;
            if(count%2==0){
                if(a[i]>='A' && a[i]<='Z'){
                    a[i]=a[i]+32;
                }
            }
            else{
                if(a[i]>='a' && a[i]<='z'){
                    a[i]=a[i]-32;
                }
            }
        }

    }
    return a;

}

int main(){
    string a;
    cin>>a;
    string b=convert(a);
    cout<<b;
}