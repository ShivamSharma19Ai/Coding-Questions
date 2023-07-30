#include<iostream>
using namespace std;
void MaxInArray(int arr[],int length)
{
	int max=-999999,maxIdx=-1;
	for(int i=0;i<length;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			maxIdx=i;
		}
	}
	cout<<max<<endl<<maxIdx;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	MaxInArray(a,n);
}