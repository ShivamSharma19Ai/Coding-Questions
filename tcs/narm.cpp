// C++ Program to find
// Nth Armstrong Number
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

// Function to find Nth Armstrong Number
int NthArmstrong(int n)
{
	int count = 0;

	// upper limit from integer
	for (int i = 1; i <= INT_MAX; i++) {
		int num = i, rem, digit = 0, sum = 0;

		// Copy the value for num in num
		num = i;

		// Find total digits in num
		digit = (int)log10(num) + 1;

		// Calculate sum of power of digits
		while (num > 0) {
			rem = num % 10;
			sum = sum + pow(rem, digit);
			num = num / 10;
		}
		// Check for Armstrong number
		if (i == sum)
			count++;
		if (count == n)
			return i;
	}
}

// Driver Code
int main()
{
	int n = 10;
	cout << NthArmstrong(n);
	return 0;
}

// This Code is Contributed by 'jaingyayak'
