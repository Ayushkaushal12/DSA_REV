#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int num=n;
    int d1=num%10;
    num /=10;
    int d2=num%10;
    num/=10;
    int d3=num%10;
    num/=10;
    int c=d1*d1*d1 + d2*d2*d2 +d3*d3*d3;
    if(c==n){
        cout<<"the number is armstrong!"<<endl;
        
    }else{
        cout<<"Not an armstrong number!";
    }
    
    return 0;
}


