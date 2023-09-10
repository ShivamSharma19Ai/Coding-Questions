
// C++ program to check whether the
// number is an Armstrong number or not
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int n = 153;
	int temp = n;
	int p = 0;

	// Function to calculate the sum of
	// individual digits
	while (n > 0) {
		int rem = n % 10;
		p = (p) + (rem * rem * rem);
		n = n / 10;
	}

	// Condition to check whether the value
	// of P equals to user input or not.
	if (temp == p) {
		cout << ("Yes. It is Armstrong No.");
	}
	else {
		cout << ("No. It is not an Armstrong No.");
	}
	return 0;
}
// This code is contributed by sathiyamoorthics19


// #include<iostream>
// using namespace std;

// int power(int x, unsigned int y){
//     if(y==0){ return 1;}
//     if(y%2 == 0){ 
//        return power(x,y/2)*power(x,y/2);
//     }
//     return x*power(x,y/2)*power(x,y/2);

// }

// int order(int x){
//     int n=0;
//     while(x){
//         n++;
//         x=x/10;
//     }
//     return n;
// }

// bool isArmStrong(int x){
//     int n=order(x);
//     int temp=x;
//     int sum=0;
//     while(temp){
//         int r=temp%10;
//         sum += power(r,n);
//         temp=temp/10;
//     }
//     return (sum==x);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<isArmStrong(n);
// }