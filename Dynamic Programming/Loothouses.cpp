/*
A thief wants to loot houses. He knows the amount of money in each house. He cannot loot two consecutive houses. Find the maximum amount of money he can loot.
Input format :
The first line of input contains an integer value of 'n'. It is the total number of houses.

The second line of input contains 'n' integer values separated by a single space denoting the amount of money each house has.
Output format :
Print the the maximum money that can be looted.
Constraints :
0 <= n <= 10 ^ 4

Time Limit: 1 sec
Sample Input 1 :
6
5 5 10 100 10 5
Sample Output 1 :
110
Sample Input 2 :
6
10 2 30 20 3 50
Sample Output 2 :
90
Explanation of Sample Output 2 :
Looting first, third, and the last houses([10 + 30 + 50]) will result in the maximum loot, and all the other possible combinations would result in less than 90.
*/

//Recursive Solution
int maxMoneyLooted(int *arr, int n)
{
	//Write your code here
	if(n==0 || n<0){
		return 0;
	}
	int a=arr[0]+maxMoneyLooted(arr+2, n-2);
	int b=maxMoneyLooted(arr+1, n-1);
    return max(a,b);
}


//Memoization
int maxMoneyLooted_mem(int * arr,int i,int n,int * output){
	if(i>=n){
		return 0;
	}
    
	if(output[i]!=-1){
		return output[i];
	}
    int ans;
	//cout<<arr[0]<<endl;
	int a=arr[i]+maxMoneyLooted_mem(arr,i+2, n,output);
	int b=maxMoneyLooted_mem(arr,i+1, n,output);
    ans = max(a,b);
	output[i]=ans;
	return ans;
}

int maxMoneyLooted(int *arr,int n){
	int *ans=new int[n];
	for(int i=0;i<n;i++){
		ans[i]=-1;
	}
	return maxMoneyLooted_mem( arr,0, n, ans);
}



// DP

int maxMoneyLooted(int *arr,int n){
	if (n == 1)
    {
        return arr[0];
    }
	int * output=new int[n];
	output[0]=arr[0];
	if(n>1){
		output[1]=max(arr[0],arr[1]);
	}
	for(int i=2;i<n;i++){
		output[i]=max(arr[i]+output[i-2],output[i-1]);
	}
	return output[n-1];
}

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << maxMoneyLooted(arr, n);

	delete[] arr;
}
