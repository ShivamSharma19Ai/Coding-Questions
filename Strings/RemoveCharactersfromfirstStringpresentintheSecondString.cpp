#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;


string solve(string str1, string str2){
    unordered_map<char, int> map;
    string ans;
    for(int i=0;i<str2.size();i++){
        map[str2[i]]=1;
    }
    for(int j=0;j<str1.size();j++){
        if(!map[str1[j]]){
           ans.push_back(str1[j]);
        }
    }
    return ans;

}

int main() {

  // Input string
  string str1 = "aabcdef";
  string str2 = "cefz";

  cout << "Final string 1:" << "\n";
  cout << solve(str1, str2) << "\n";
  return 0;
}