#include<iostream>
#include<math.h>
using namespace std;
void roots(int a,int b,int c){
    //Base Case
    if(a==0){
        cout<<"Invalid";
        return;
    }
    //Discriminator
    int d=b*b - 4*a*c;
    //Double since it can be in decimal
    double sqrt_val=sqrt(abs(d));
    //d>0 -> -b+sqrt(b^2-4ac)/2a  -b-sqrt(b^2-4ac)/2a
    if(d>0){
        cout<<(double)(-b+sqrt_val)/(2*a)<<"\n";
        cout<<(double)(-b-sqrt_val)/(2*a);
    }
    //d==0 -b/2a
    else if(d==0){
        cout<<-(double)b/(2*a);
    }
    //d<0 {-b + i√-(b2 – 4ac)}/2a   {-b + i√-(b2 – 4ac)}/2a
    else{
        cout<< -(double)b / (2*a)<<" + i"<<sqrt_val/(2*a)<<"\n";
        cout<< -(double)b / (2 * a) << " - i"<< sqrt_val / (2 * a);
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    roots(a,b,c);
}

/*
#include<iomanip>
cout << "Print up to 3 decimal places: " << setprecision(3) << x << endl;

*/