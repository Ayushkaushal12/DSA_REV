#include<iostream>
using namespace std;
int searchSort(int mat[][4], int n,int tar){
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            if(mat[i][j]==tar){
                cout<<i<<" "<<j<<endl;
                return 1;
            }
        }
    }
    return -1;
}
int main(){
    int mat[4][4]={ {10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {31,32,33,34}
                      };
     int tar=33;
     searchSort(mat,4,tar);
}