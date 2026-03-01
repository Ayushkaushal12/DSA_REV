#include<iostream>
using namespace std;
int bintodec(int binNum){
    int n=binNum;
    int decimal=0,base=1;

    while(n>0){
        int lastdigit=n%10;
        decimal+=lastdigit*base;
        base*=2;
        n/=10;
    }
    return decimal;
}
int dectobin(int decNum){
    int n=decNum;
    int binNum=0,base=1;

    while(n>0){
        int rem=n%2;
        binNum+=rem*base;
        base*=10;
        n/=2;
    }
    return binNum;
}
int main(){
 cout<<bintodec(101)<<endl;
 cout<<dectobin(5)<<endl;
 return 0;
}