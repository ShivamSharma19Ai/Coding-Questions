/*
You are given two strings S and T of lengths M and N, respectively. Find the 'Edit Distance' between the strings.
Edit Distance of two strings is the minimum number of steps required to make one string equal to the other. In order to do so, you can perform the following three operations:
1. Delete a character
2. Replace a character with another one
3. Insert a character
Note :
Strings don't contain spaces in between.
 Input format :
The first line of input contains the string S of length M.

The second line of the input contains the String T of length N.
Output format :
Print the minimum 'Edit Distance' between the strings.
Constraints :
0 <= M <= 10 ^ 3
0 <= N <= 10 ^ 3

Time Limit: 1 sec
Sample Input 1 :
abc
dc
Sample Output 1 :
2
 Explanation to the Sample Input 1 :
 In 2 operations we can make string T to look like string S.
First, insert character 'a' to string T, which makes it "adc".

And secondly, replace the character 'd' of string T with 'b' from the string S. This would make string T as "abc" which is also string S. 

Hence, the minimum distance.
Sample Input 2 :
whgtdwhgtdg
aswcfg
Sample Output 2 :
9
*/


#include <iostream>
using namespace std;

int editDistance_DP(string s, string t) {
	int m = s.size();
	int n = t.size();
	int **output = new int*[m+1];
	for(int i = 0; i <= m; i++) {
		output[i] = new int[n+1];
	}

	// Fill 1st row
	for(int j = 0; j <= n; j++) {
		output[0][j] = j;
	}

	// Fill 1st col
	for(int i = 1; i <= m; i++) {
		output[i][0] = i;
	}

	for(int i = 1; i <= m; i++) {
		for(int j = 1; j <= n; j++) {
			if(s[m-i] == t[n-j]) {
				output[i][j] = output[i-1][j-1];
			}
			else {
				int a = output[i-1][j];
				int b = output[i][j-1];
				int c = output[i-1][j-1];
				output[i][j] = min(a, min(b, c)) + 1;
			}
		}
	}

	return output[m][n];
}

int editDistance_mem(string s, string t, int **output) {
	int m = s.size();
	int n = t.size();
	
	if(s.size() == 0 || t.size() == 0) {
		return max(s.size(), t.size());
	}

	// Check if ans already exists
	if(output[m][n] != -1) {
		return output[m][n];
	}

	int ans;
	if(s[0] == t[0]) {
		ans = editDistance_mem(s.substr(1), t.substr(1), output);
	}
	else {
		// Insert
		int x = editDistance_mem(s.substr(1), t, output) + 1;
		// Delete
		int y = editDistance_mem(s, t.substr(1), output) + 1;
		// Replace
		int z = editDistance_mem(s.substr(1), t.substr(1), output) + 1;

		ans =  min(x, min(y, z));
	}

	// Save the ans
	output[m][n] = ans;

	// Return the ans
	return ans;
}

int editDistance_mem(string s, string t) {
	int m = s.size();
	int n = t.size();
	int **ans = new int*[m+1];
	for(int i = 0; i <= m; i++) {
		ans[i] = new int[n+1];
		for(int j = 0; j <= n; j++) {
			ans[i][j] = -1;
		}
	}
	return editDistance_mem(s, t, ans);

}

int editDistance(string s, string t) {
	// Base case
	if(s.size() == 0 || t.size() == 0) {
		return max(s.size(), t.size());
	}

	if(s[0] == t[0]) {
		return editDistance(s.substr(1), t.substr(1));
	}
	else {
		// Insert
		int x = editDistance(s.substr(1), t) + 1;
		// Delete
		int y = editDistance(s, t.substr(1)) + 1;
		// Replace
		int z = editDistance(s.substr(1), t.substr(1)) + 1;

		return min(x, min(y, z));
	}
}

int main() {
	string s = "abcdfabcdfabcdfabcdfabcdfabcdfabcdfabcdfabcdfabcdfabcdf";
	string t = "afdiafdafdafdafd";

	cout << editDistance_DP(s, t) << endl;
	cout << editDistance_mem(s, t) << endl;
	cout << editDistance(s, t) << endl;
}
