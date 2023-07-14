#include <iostream>
using namespace std;

void prefixsum(int arr[],int prefix[],int a){
    int max=-999999999;
     for(int i=0;i<a;i++){
         if(arr[i]>max){
            max=arr[i];
         } 
         prefix[i]=max;
     }
}
void suffixsum(int arr[],int prefix[],int a){
    int max=-9999999;

    for(int i=a-1, j=0;i>0;i--,j++){
         if(arr[i]>max){
            max=arr[i];
         } 
         prefix[j]=max;
     }
}

int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int prefix[a];
    int suffix[a];
    prefixsum(arr,prefix,a);
    suffixsum(arr,suffix,a);
    cout<<"Prefix Table";
    for(int i=0;i<a;i++){
        cout<<prefix[i]<<endl;
    }
    cout<<endl;
    cout<<"Suffix Table";
    for(int i=0;i<a;i++){
        cout<<suffix[i]<<endl;
    }
}