#include<iostream>
using namespace std;

void spiralMatrix(int mat[][4], int n, int m){
    int srow=0, scol=0, erow=n-1, ecol=m-1;
    while(srow<=erow && scol<=ecol){
        for(int j=scol;j<=ecol;j++){
            cout<<mat[srow][j]<<" ";
        }
        for(int i=srow+1;i<=erow;i++){
            cout<<mat[i][ecol]<<" ";
        }
        for(int j=ecol-1;j>=scol;j--){
            if(srow==erow){
                break;
            }
            cout<<mat[erow][j]<<" ";
        }
        for(int i=erow-1;i>srow;i--){
            if(scol==ecol){
                break;
            }
            cout<<mat[i][scol]<<" ";
        }
        srow++;scol++;erow--;ecol--;
    }
}


int main(){
    int mat[3][4]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}};
    int n=3,m=4;
    spiralMatrix(mat,n,m);
    return 0;

}