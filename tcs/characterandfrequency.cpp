#include <bits/stdc++.h>
using namespace std;
int main(){
   string str = "tutorialspoint";
   int n = str.size();
   int frequency[26];
   memset(frequency, 0, sizeof(frequency));
   for (int i = 0; i < n; i++)
      frequency[str[i] - 'a']++;
   for (int i = 0; i < n; i++) {
      if (frequency[str[i] - 'a'] != 0) {
         cout<<str[i]<<"\t"<<frequency[str[i] - 'a']<<"\n";
         frequency[str[i] - 'a'] = 0;
      }
   }
   return 0;
}