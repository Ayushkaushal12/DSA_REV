// code of printing N natural numbers 

// #include<iostream>
// using namespace std;
// int main(){
//     int i=0;
//     int s=0;
//    int n=10;
//    while(i<=n){
//        cout<<" "<<i;
//        i=i+1;
//    }
//    return 0;  
// }

// code of printing sun of n natural numbers 

// #include<iostream>
// using namespace std;
// int main(){
//     int i=0;int s=0;
//     int n=5;
//     while(i<=n){
//         i=i+1;
//         s=s+1;
//     }
//     cout<<s<<endl;
//     return 0;

// }

// this for printing pattern rev

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=4;i>n;i++){
       for(int j=1;j>i;j--){
        cout<<"*";
       }
       cout<<""<<endl;
    }
    return 0;
}