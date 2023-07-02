#include<iostream>
using namespace std;



int recursiveLongest(string str1, string str2, int n , int m){
    if(n==0 ||m==0){
        return 0;
    }
    else if(str1[n-1]==str2[m-1]){
        return recursiveLongest(str1,str2,n-1,m-1)+1;
    }
    else{
        return max(recursiveLongest(str1,str2,n-1,m),recursiveLongest(str1,str2,n,m-1));
    }
}

int Longestcommonsubsequence(string str1,string str2){
    int n=str1.length();
    int m=str2.length();
    return recursiveLongest(str1,str2,n,m);
}

int main(){
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    int LCS=Longestcommonsubsequence(str1,str2);
    int n=str1.length();
    int m=str2.length();
    cout<<n+m-LCS;
}