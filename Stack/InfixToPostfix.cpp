/*
Convert an infix expression into postfix expression.

Input Format

The first input will be a single integer N denoting the number of test cases to take. followed by N infix strings.

Binary operators (+, -, *, / and ?) and parenthesis. Every integer, operator and parenthesis will be compulsorily separated by a SPACE. The symbol ‘?’ denotes the end of expression.

Constraints

NA

Output Format

N lines denoting postfix expression.

Every integer and operator must be separated by a single SPACE.

Sample Input 0

1
31 * ( 4 + 50 ) ?
Sample Output 0

31 4 50 + *
Sample Input 1

1
( ( 32 + 34 * 12 ) * ( 1 + 2 ) / ( 1 + 1 ) ) * ( 23 - 21 ) ?
Sample Output 1

32 34 12 * + 1 2 + * 1 1 + / 23 21 - *
*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int pred(char alpha){
    if(alpha == '+' || alpha =='-')
        return 1;
 
    if(alpha == '*' || alpha =='/')
        return 2;
 
    if(alpha == '^')
        return 3;

 
    return 0;
}

string InfixtoPostfix(string infix){
    string postfix="";
    stack<int> elementStack;
    int i=0;
    while(infix[i]!='\0')
    {
        if( ( infix[i]>='a' && infix[i]<='z')||(infix[i]>='A'&&infix[i]<='Z')){
            postfix+=infix[i];
        }
        else if(infix[i]=='('){
            elementStack.push(infix[i]);
        }
        else if(infix[i]==')'){
            while(!elementStack.empty() && elementStack.top()!='('){
                char a=elementStack.top();
                postfix+=a;
                elementStack.pop();
            }
            elementStack.pop();
        }
        else{
            while(!elementStack.empty() && pred(infix[i])<=pred(elementStack.top())){
                postfix+=elementStack.top();
                elementStack.pop();
            }
            elementStack.push(infix[i]);
        }
        i++;
    }
    while(!elementStack.empty()){
        postfix += elementStack.top();
        elementStack.pop();
    }
    return postfix;
}

int main() {
    
        string infix="";
        cin>>infix;
        cout<<InfixtoPostfix(infix);


    return 0;
}
