#include<bits/stdc++.h>
using namespace std;
 
// Cyclic shifts of integer N by another integer m
void Count(int N, int m, char turn)
{
  // str represents bitwise representation of N
  string str = bitset<16>(N).to_string();
   
  m%=(int)str.size();
   
  // rotate the string by a specific count
  if(turn=='R')
    str = str.substr((int)str.size()-m) + str.substr(0,(int)str.size());
  else 
    str = str.substr(m) + str.substr(0,m);
   
  // printing the number represented by the bitset
  // in str
  cout << bitset<16> (str).to_ulong() << '\n';
}
 
int main()
{
  int N = 7881;
  int m = 5;
  char turn = 'L';
  Count(N,m,turn);
}