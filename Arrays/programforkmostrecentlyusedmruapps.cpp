#include <iostream>
using namespace std;

void mostRecentlyUsedApps(int arr[],int N,int K){
    K=K%N;
    for(int i=K;i>0;i--){
        swap(arr[i],arr[i-1]);
    }
}

void printArray(int arr[], int N){
    for(int i=0;i<N;i++){
        cout<<arr[i];
    }
}
int main()
{
    int K = 3;
    int arr[] = { 5, 7 ,2,3,4,1,6 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    mostRecentlyUsedApps(arr, N, K);
    printArray(arr, N);
    return 0;
}