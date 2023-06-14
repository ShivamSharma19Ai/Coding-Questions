/*
Given an array with N elements, you need to find the length of the longest subsequence in the given array such that all elements of the subsequence are sorted in strictly increasing order.
Input Format
The first line of input contains an integer N. The following line contains N space separated integers, that denote the value of elements of array.
Output Format
The first and only line of output contains the length of longest subsequence.
Constraints
1 <= N <= 10^3
Time Limit: 1 second
Sample Input 1 :
6
5 4 11 1 16 8
Sample Output 1 :
3
Sample Output Explanation
Length of longest subsequence is 3 i.e. (5,11,16) or (4,11,16).
Sample Input 2 :
3
1 2 2
Sample Output 2 :
2
*/

#include <bits/stdc++.h>
#include<algorithm>
/*
//Recursion
int helper(int* arr, int i,int n ){
	if(n<=0){
		return 0;
	}
	
	if(arr[0]>i){
		int a=helper(arr+1,arr[0], n-1)+1;
		int b=helper(arr+1,i,n-1);
		int ans=max(a,b);
		return ans;
	}
	else{
		return helper(arr+1,i,n-1);
	}

}

int longestIncreasingSubsequence(int* arr, int n) {
	// Write your code here
    helper(arr,0,n);
}


//Memoization
int longestIncreasingSubsequence_mem(int* arr,int ind,int prev,int n,vector<vector <int>> output){
     if(ind==n){
		return 0;
	}
	if(output[ind][prev+1]!=-1){
		return output[ind][prev+1];
	}
	int ans;
	if(arr[ind]>arr[prev] || prev==-1){
		int a=longestIncreasingSubsequence_mem(arr,ind+1,ind, n,output)+1;
		int b=longestIncreasingSubsequence_mem(arr,ind+1,prev,n,output);
		ans=max(a,b);
	}
	else{
		ans=longestIncreasingSubsequence_mem(arr,ind+1,prev,n,output);
	}
	output[ind][prev]=ans;
	return ans;

}

int longestIncreasingSubsequence(int *arr, int n) {
	vector <vector <int>> ans(n, vector<int>(n+1,-1) );
	longestIncreasingSubsequence_mem(arr,0,-1,n,ans);
}


//DP


int longestIncreasingSubsequence(int *arr, int n) {
	vector<vector<int>> dp(n+1, vector<int>(n+1,0));
	for(int ind=n-1;ind>=0;ind--){
		for(int prev_ind=ind-1;prev_ind>=-1;prev_ind--){
			int len= 0 + dp[ind+1][prev_ind+1];
			if(prev_ind==-1 || arr[ind] > arr[prev_ind]){
               len=max(len,1+ dp[ind+1][ind+1]);
			}
			dp[ind][prev_ind+1]=len;
		}
	}
	return dp[0][-1+1];
}
*/
//Space Optimized Code
int longestIncreasingSubsequence(int *arr, int n) {
	vector<int> next(n+1,0);
	vector<int> cur(n+1,0);
	for(int ind=n-1;ind>=0;ind--){
		for(int prev_ind=ind-1;prev_ind>=-1;prev_ind--){
			int len= 0 + next[prev_ind+1];
			if(prev_ind==-1 || arr[ind] > arr[prev_ind]){
               len=max(len,1+ next[ind+1]);
			}
			cur[prev_ind+1]=len;
		}
		next=cur;
	}
	return next[-1+1];
}

#include <bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << longestIncreasingSubsequence(arr, n);
}