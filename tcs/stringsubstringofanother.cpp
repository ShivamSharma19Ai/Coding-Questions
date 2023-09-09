// C++ implementation of the approach

#include <bits/stdc++.h>
using namespace std;

// function to get the index of s2 in s1
int isSubstring(string s1, string s2)
{
	// using find method to check if s1 is
	// a substring of s2
	if (s2.find(s1) != string::npos)
		return s2.find(s1);
	return -1;
}

// Driver code
int main()
{
	string s1 = "for";
	string s2 = "geeksforgeeks";

	// Function Call
	int res = isSubstring(s1, s2);
	if (res == -1)
		cout << "Not present";
	else
		cout << "Present at index " << res;
	return 0;
}

// this code is contributed by phasing17
