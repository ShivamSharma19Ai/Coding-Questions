//Leetcode 214
/*
You are given a string s. You can convert s to a 
palindrome
 by adding characters in front of it.

Return the shortest palindrome you can find by performing this transformation.

 

Example 1:

Input: s = "aacecaaa"
Output: "aaacecaaa"
Example 2:

Input: s = "abcd"
Output: "dcbabcd"
 

Constraints:

0 <= s.length <= 5 * 104
s consists of lowercase English letters only.
*/

class Solution {
public:
    
    string shorts(string s,string d){
       int i=1;
        int len=0;
        int m=s.length();
        int lps[m];
        lps[0]=0;
        while(i<m){
            if(s[i] == s[len]){
               len++;
               lps[i]=len;
               i++;
            }
            else{
                if(len!=0){
                    len=lps[len-1];
                }
                else{
                    if(len!=0){
                        len=lps[len-1];
                    }
                    else{
                        lps[i]=0;
                        i++;
                    }
                }
            }
        }
        int a=lps[m-1];
        int n=d.length();
        string out=d.substr(a,n-a);
        reverse(out.begin(),out.end());
        d.insert(0, out);
        return d; 
    }

    string shortestPalindrome(string s) {
        string a=s;
        string d=s;
        reverse(a.begin(),a.end());
        s=s+"#"+a;
        return shorts(s, d) ;
    }
    
};
