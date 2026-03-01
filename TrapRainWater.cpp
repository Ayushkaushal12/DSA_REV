#include<iostream>
#include<climits>
using namespace std;

void trapwater(int *heights,int n){
    int leftmax[10000];int rightmax[10000];
    leftmax[0]=heights[0];
    rightmax[n-1]=heights[n-1];
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],heights[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],heights[i+1]);
    }
    int trappedwater=0;
    for(int i=0;i<n;i++){
        int cuurentwater=min(leftmax[i],rightmax[i])-heights[i];
        if(cuurentwater>0){
            trappedwater+=cuurentwater;
        }
    }
    cout<<trappedwater<<endl;
}
int main(){
    int arr[12]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    trapwater(arr,n);
    return 0;

}