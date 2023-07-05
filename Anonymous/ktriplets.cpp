#include <iostream>
using namespace std;

int hcf(int a, int b){
    return b == 0 ? a : hcf(b, a % b);
}

int fact(int n){
    if (n == 0 || n == 1){
   return 1;
    }
   else{
   return n * fact(n - 1);
   }
}

int combination(int N , int R){
    int ans = fact(N) / (fact(R) * fact(N-R));
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int *arr=new int(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            count++;
        }
    }
    int numerator=combination(count,3);
    int denominator=combination(n,3);
    int factor=hcf(numerator,denominator);
    cout<<numerator/factor;
    cout<<"/";
    cout<<denominator/factor;

}