#include<iostream>
using namespace std;
void daSum(int mat[][4],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=mat[i][i];
        if(i!=n-1-i){
            sum+=mat[i][n-1-i];
        }

    }
    cout<<"Diagonal sum is "<<sum;
}
int main(){
    int mat[3][4]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}};
    int n=3;
    daSum(mat,n);
    return 0;

}