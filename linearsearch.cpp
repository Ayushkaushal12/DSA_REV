#include<iostream>
using namespace std;
int linearSearch(int arr[], int sz,int tar){
    for(int i=0;i<sz;i++){
        if(arr[i]==tar){
            cout<<"The target element is found at index: "<<i<<endl;
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[8]= {2,4,6,8,10,12,14,16};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int tar=14;
     linearSearch(arr,sz,tar);
    cout<<"The target element is: "<<tar<<endl;
    // linearSearch(arr,sz,tar);
     return 0;


}