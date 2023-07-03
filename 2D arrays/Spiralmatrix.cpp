#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int cs=0;
        int ce=matrix.size()-1;
        int rs=0;
        int re=matrix[0].size()-1;
        vector<int> ans;
        int count=0;
        int check=(ce+1)*(re+1);
        while(count<check){
        for(int i=rs;i<=re;i++){
            ans.push_back(matrix[cs][i]);
            count++;
        }
        cs++;
        if(count>=check){
            break;
        }
        for(int i=cs;i<=ce;i++){
            ans.push_back(matrix[i][re]);
            count++;
        }
        re--;
        if(count>=check){
            break;
        }
        for(int i=re;i>=rs;i--){
            ans.push_back(matrix[ce][i]);
            count++;
        }
        ce--;
        if(count>=check){
            break;
        }
        for(int i=ce;i>=cs;i--){
            ans.push_back(matrix[i][rs]);
            count++;
        }
        rs++;
        if(count>=check){
            break;
        }
        }
        return ans;
    } 

int main(){
    vector<vector<int>> arr{ {1,   2,   3,   4,  5,   6},
           {7,   8,   9,  10,  11,  12},
          {13,  14,  15, 16,  17,  18}};  
    vector<int> ans;
    ans=spiralOrder(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}