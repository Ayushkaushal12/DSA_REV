#include<iostream>
using namespace std;
int binarySea(int arr[], int n,int target){
    int st=0; int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int target=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"the target is at index: "<<binarySea(arr,n,target)<<endl;
    cout<<"the target is at index: "<<binarySea(arr,n,10)<<endl;

}