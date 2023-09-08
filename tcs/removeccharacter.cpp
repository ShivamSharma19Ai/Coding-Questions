// C++ program to remove duplicates
#include <bits/stdc++.h>
using namespace std;

char* removeChars(char* s1, int n1, char* s2, int n2)
{
	int arr[26] = { 0 }; // an array of size 26 to count the frequency of characters
	int curr = 0;
	for (int i = 0; i < n2; i++) // assigned all the index of characters which are present
		arr[s2[i] - 'a'] = -1; // in second string by -1 (just flagging)
	for (int i = 0; i < n1; i++)
		if (arr[s1[i] - 'a'] != -1) { // Checking if the index of characters don't have -1
			s1[curr] = s1[i];	 // i.e, that character was not present in second string
			curr++;			 // and then storing that character in string
		}
	s1[curr] = '\0'; // marking last character as null to point the end of string
	return s1;
}

// driver code
int main()
{
	char string1[] = "geeksforgeeks";
	char string2[] = "mask";
	int n1 = sizeof(string1) / sizeof(string1[0]);
	int n2 = sizeof(string2) / sizeof(string2[0]);
	cout << removeChars(string1, n1, string2, n2) << endl;
	return 0;
}
