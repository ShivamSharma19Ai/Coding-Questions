bool checkCapital(string s){
   int counter=0;
   int loc=-1;
   for(int i=0;i<s.size();i++){
      if(s[i]>='A' && s[i]<= 'Z'){
         counter++;
         loc=i;
      }
   }
   if(counter==s.size() || counter==0 ||(counter==1 && loc==0))
      return true;
   return false;
}

// class Solution {
// public:
//     bool detectCapitalUse(string word) {
//         if(word.size()==1){
//             return true;
//         }
//         bool small=false;
//         if(word[0]>='a' && word[0] <='z'){
//             small=true;
//         }
//         for(int i=1;i<word.size();i++){
//             if( small && word[i]>='A' && word[i]<='Z'){
//                 return false;
//             }
//             else if(word[i]>='a' && word[i]<='z' && !small){
//                 small=true;
//                 if(i!=1){
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// };