#include <iostream>
using namespace std;
void sort012(int a[], int n)
{
    int low = 0, high = n - 1, mid = 0;
    while (mid <= high) {
        if (a[mid] == 0) swap(a[mid++], a[low++]);
        else if (a[mid] == 1) mid++;
        else swap(a[mid], a[high--]);
        /* why not mid++ ?
            ans: let's assume the one which with we are swapping is also 2 then after swapping in mid pos it will still be 2
                hence solution is don't increment the mid until and unless it is equal to 1.
        */
    }
    for (int i = 0;i < n;i++) {
        cout << a[i] << " ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr,n);
}