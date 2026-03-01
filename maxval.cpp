#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,5,7,11};
    int max=0;
    for(int i=0;i<5;i++){
        if(arr[i]>max)
        max=arr[i];
        }
        cout<<"The maximum value in the array is: "<<max<<endl;
     return 0;
}