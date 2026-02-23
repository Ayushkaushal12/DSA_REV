#include<iostream>
using namespace std;
int fact(int n){
    for(int i = n-1; i > 0; i--){
        n *= i;
    }
    return n;
}
int binomial(int n, int r){
    return fact(n) / (fact(r) * fact(n-r));
}
int main(){
 cout << "Enter n and r: ";
 int n, r;
    cin >> n >> r;
    cout << "Binomial Coefficient: " << binomial(n, r) << endl;
}