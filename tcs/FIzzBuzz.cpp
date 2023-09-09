class Solution {
public:
    vector<string> fizzBuzz(int n) {

      int i=n;
      vector<string> ans;
     for(n=1;n<=i;n++){
      if(n%3==0 && n%5==0){
          ans.push_back("FizzBuzz");
      }
      else if(n%3==0){
          ans.push_back("Fizz");
      }
      else if(n%5==0){
          ans.push_back("Buzz");
      }
      else{
          ans.push_back(to_string(n));
      }
     }
      return ans;
    }
};