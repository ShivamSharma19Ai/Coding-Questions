#include <iostream>
using namespace std;
bool isEven(int n){
    if(n%2==0){
        return true;
    }
    cout<<" is odd";
    return false;
}
int main(){
  int n;
  cin>>n;
  if(n==0){
    cout<<n;
    if(isEven(n)){
        cout<<" is Even";
    }
  }
  else if(n>0){
    cout<<"Positive Number "<<n;
    if(isEven(n)){
        cout<<" is Even";
    }
  }
  else{
    cout<<"Negative Number"<<n;
    if(isEven(n)){
        cout<<" is Even";
    }
  }

}