#include<iostream>
using namespace std;
void printArr(int arr[], int sz){
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int copyArr[n];
    for(int i=0;i<n;i++){
        copyArr[i]=arr[n-1-i];
    }
    for(int i=0;i<n;i++){
        arr[i]=copyArr[i];
    }
    printArr(arr,n);
    return 0;


}