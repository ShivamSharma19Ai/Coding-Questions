/*
A thief robbing a store can carry a maximal weight of W into his knapsack. There are N items, and i-th item weigh 'Wi' and the value being 'Vi.' What would be the maximum value V, that the thief can steal?
Input Format :
The first line of the input contains an integer value N, which denotes the total number of items.

The second line of input contains the N number of weights separated by a single space.

The third line of input contains the N number of values separated by a single space.

The fourth line of the input contains an integer value W, which denotes the maximum weight the thief can steal.
Output Format :
Print the maximum value of V that the thief can steal.
Constraints :
1 <= N <= 20
1<= Wi <= 100
1 <= Vi <= 100

Time Limit: 1 sec
Sample Input 1 :
4
1 2 4 5
5 4 8 6
5
Sample Output 1 :
13
Sample Input 2 :
5
12 7 11 8 9
24 13 23 15 16
26
Sample Output 2 :
51
*/

#include <cstring>
#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int* wt = new int[n];
    int* val = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    for (int j = 0; j < n; j++) {
        cin >> val[j];
    }

    int w;
    cin >> w;

    cout << knapsack(wt, val, n, w) << "\n";

    delete[] wt;
    delete[] val;
}

int knapsack_mem(int* weight, int* value, int n, int maxWeight,int ** output){
     if(n == 0 || maxWeight == 0){
        return 0;
    }
    
	// Check if ans already exists
	if(output[n][maxWeight] != -1) {
		return output[n][maxWeight];
	}
	int ans;
    if (weight[0] > maxWeight){
		ans= knapsack_mem(weight + 1, value + 1, n - 1, maxWeight, output);
    } else {
      int inc = knapsack_mem(weight + 1, value + 1, n - 1,
                             maxWeight - weight[0], output) +
                value[0];
      int notInclude =
          knapsack_mem(weight + 1, value + 1, n - 1, maxWeight, output);

      ans = max(inc, notInclude);
    }
    output[n][maxWeight]=ans;
	return ans;
}



int knapsack_mem(int* weight, int* value, int n, int maxWeight) {
	int** ans=new int*[n+1];
    for(int i=0;i<=n;i++){
		ans[i]=new int[maxWeight+1]; 
		for(int j=0;j<=maxWeight;j++){
			ans[i][j]=-1;
		}
	}

	return knapsack_mem(weight,value,n,maxWeight,ans);
}


int knapsack_dp(int *weight, int *value, int n, int maxWeight) {
     int** output=new int*[n+1];
    for(int i=0;i<=n;i++){
		output[i]=new int[maxWeight+1]; 
		for(int j=0;j<=maxWeight;j++){
			//output[i][j]=0;
		}
	}

		// Fill 1st row
	for(int j = 0; j <= maxWeight; j++) {
		output[0][j] = 0;
	}

	// Fill 1st col
	for(int i = 1; i <= n; i++) {
		output[i][0] = 0;
	}

	for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= maxWeight; j++) {
          if (weight[i-1] > j) {
			  output[i][j]=output[i-1][j];
          } else{
            int inc = output[i - 1][j - weight[i-1]] + value[i-1];
            int notInclude = output[i - 1][j];
            output[i][j] = max(inc, notInclude);
          }
        }
    }
	return output[n][maxWeight];
}
int knapsack(int *weights, int *values, int n, int maxWeight)
{
    if(n == 0 || maxWeight == 0){
        return 0;
    }
	  
    if (weights[0] > maxWeight){
		return knapsack(weights + 1, values + 1, n - 1, maxWeight);
    }
    int inc = knapsack(weights + 1, values + 1, n - 1, maxWeight - weights[0]) + values[0];
    int notInclude = knapsack(weights + 1, values + 1, n - 1, maxWeight);
	
    return max(inc, notInclude);
}

