/*
You are in a betting game with initial Amount 10 if you win the game you get the betting amount and if you lose the game you have to give it. The winner set the bet . If you win the game you get the betting amount and if you lose the game you have to give it. THe winner set the bet. If you win you always eat set half of the previous bet(if the previous bet is greater than one or you set it one) and if you lose you opponent set double the previous bet.

You are given a string with series of W and L representing wins and losses Print -1 if you cannot continue the game and if you compete the entire series print the final amount you have. And the game begins with a bet of 1.

WLWLWLWLWLWLW
17
*/
/*
#include <iostream>
using namespace std;

int output(int n, int arr[]){
    int amount =10;
    int bet=1;
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<"Inside Loop";
        if(arr[i]=='W'){
            if(bet==1){
                amount=amount+bet;
                cout<<amount<<endl;
            }
            else{
                amount=amount+bet;
                bet=bet/2;
                cout<<amount <<endl;
            }
        }
        if(arr[i]=='L'){
           amount=amount-bet;
           bet=bet*2;
           cout<<amount<<endl;
        }
    }
    return amount;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    while(i<=n){
       cin>>arr[i];
       i++;
    }

    cout<<output(n, arr);

}
*/

#include <iostream>
using namespace std;

int main(){
    string i;
    cin>>i;
    int a=i.size();
    int bet=1;
    int amount =10;
    for(int j=0;j<a;j++){
       if(i[j]=='W'){
            if(bet==1){
                amount=amount+bet;
            }
            else{
                amount=amount+bet;
                bet=bet/2;
            }
        }
        if(i[j]=='L'){
           amount=amount-bet;
           bet=bet*2;
        }
    }
    cout<<amount;
}
