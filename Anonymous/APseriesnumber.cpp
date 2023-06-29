/*
Given an AP series one number is missing in the series find the number. THe first and last element will not be the missing number.

Sample Input:
5 
1 5 7 9 11

Sample Output:
3
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a= arr[0];
    int b=arr[n-1]-a;
    int d=b/n;
    for(int i=2;i<n;i++){
        int an= a + (i-1)*d;
        if(an!=arr[i-1]){
           cout<<an;
           break;
        }  
    }
}
