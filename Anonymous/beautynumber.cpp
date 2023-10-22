#include<iostream>
#include <bits/stdc++.h>
#include<unordered_map>
#include<string>
#include<map>
using namespace std;

int main(){
    string a;
    cin>>a;
    map<int, int> ans;
    vector<int> nums;
    for(int i=0;i<a.size();i++){
        ans[a[i]]++;
        nums.push_back(a[i]);
    }
    sort(nums.begin(),nums.end(),[&](int a,int b){return ans[a]!=ans[b]? ans[a]>ans[b] : a<b;});
    int sum=0;
    int val=26;
    for(int i=0;i<nums.size();i++){
       sum=sum+ans[nums[i]]*val;
       val--;
    }
    cout<<sum;
}