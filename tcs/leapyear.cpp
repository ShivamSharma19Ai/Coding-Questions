#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%400==0 ||( (n%100!=0) && (n%4 == 0) )){
        cout<<"Leap Year";
    }
    else{
        cout<<"Not A leap year";
    }
}