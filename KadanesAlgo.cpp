#include<iostream>
using namespace std;
void kadanesAlgo(int arr[],int n){
    int maxSum=0;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum=max(maxSum,currSum);
    }
    cout<<"Max Sum: "<<maxSum<<endl;
}
int main(){
  int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    kadanesAlgo(arr,n);
}