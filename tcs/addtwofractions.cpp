#include <iostream>
using namespace std;

int getGcd(int a,int b){
    if(a==0){
        return b;
    }
    return getGcd(b%a,a);
}

int main(){
    int num1,den1,num2,den2;
    cin>>num1,den1,num2,den2;
    int gcd=getGcd(den1,den2);
    int lcm=(den1*den2)/gcd;

    int num=(num1*(lcm/den1))+(num2*(lcm/den2));
    int hcf=getGcd(lcm,num);
    cout<<num/hcf<<"/"<<lcm/hcf;

}