#include<iostream>
using namespace std;
int addfunction(int a, int b){
    return a+b;
}
int subfunction(int a, int b){
    return a-b;
}
int main(){
    cout << addfunction(5,3) << endl;
    cout << subfunction(5,3) << endl;
}