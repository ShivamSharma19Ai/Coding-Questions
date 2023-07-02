/*
//LCS Recursive;
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

    int a=Longestcommonsubsequence(str1,str2);
    cout<<a;
}
*/


/*
//LCS Memoization

#include <iostream>
using namespace std;

int lcs_mem(int **arr, int n , int m, string str1,string str2){
    if(n==0 || m==0){
        return 0;
    }
    if(arr[n][m]!=-1){
        return arr[n][m];
    }
    if(str1[n-1]==str2[m-1]){
        arr[n][m]=1+lcs_mem(arr,n-1,m-1,str1,str2);
    }
    else{
        arr[n][m]=max(lcs_mem(arr,n-1,m,str1,str2),lcs_mem(arr,n,m-1,str1,str2));
    }
    return arr[n][m];
}

int main(){
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    int n=str1.length();
    int m=str2.length();
    int** arr = new int*[n+1];
    for(int i=0;i<=n;i++){
        arr[i] = new int[m+1];
        for(int j=0;j<=m;j++){
            arr[i][j]=-1;
        }
    }
    cout<<lcs_mem(arr,n,m,str1,str2);
}

*/
/*
//LCS DP
*/
#include <iostream>
using namespace std;

int main(){
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    int n=str1.length();
    int m=str2.length();
    int** arr = new int*[n+1];
    for(int i=0;i<=n;i++){
        arr[i] = new int[m+1];
        for(int j=0;j<=m;j++){
        }
    }
    for(int i=0;i<=n;i++){
        arr[i][0]=0;
    }
    for(int j=0;j<=m;j++){
        arr[0][j]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(str1[i]==str2[j]){
                arr[i][j]=1+arr[i-1][j-1];
            }
            else{
                arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
            }
        }
    }
    cout<<arr[n][m];

}