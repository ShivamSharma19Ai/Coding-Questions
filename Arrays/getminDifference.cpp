#include <algorithm>
#include <iostream>
using namespace std;

int mindiff( int n, int k, int arr[]) {
    if (n == 1) return 0;
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];

    for (int i = 0;i < n;i++) {
        if (arr[i] < k) continue;     // to avoid negative height in curr_min
        int curr_min = min(arr[0] + k, arr[i] - k);
        int curr_max = max(arr[n - 1] - k, arr[i - 1] + k);
        if (curr_max < curr_min) continue;      // as max till now can't be smaller than min till now hence ignore that element.
        ans = min(ans, curr_max - curr_min);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    mindiff(n, k ,arr);
}