#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         int n=intervals.size();
         sort(intervals.begin(),intervals.end());
         vector<vector<int>> ans;
         for(int i=0;i<n;i++){
             if(ans.empty() || ans.back()[1] < intervals[i][0]){
                 ans.push_back(intervals[i]);
             }
             else{
                 ans.back()[1] = max(ans.back()[1], intervals[i][1]);
             }
             
         }
         return ans;
    }

int main(){
    vector<vector<int>> interval;
    int n;
    cin>>n;
    vector<vector<int>> Interval(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        Interval[i].push_back(x);
        Interval[i].push_back(y);
    }
    vector<vector<int>> ans=overlappedInterval(interval);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < 2; j++){
            cout << ans[i][j] << " ";
        } 
        cout << endl;
    }
}