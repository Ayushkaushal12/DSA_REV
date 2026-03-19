#include<iostream>
using namespace std;
void revChar(int word[], int n){
    int st=0;int end=n-1;
    while(st<end){
        swap(word[st],word[end]);
        st++;
        end--;
    }
}
int main(){
  int word[]={'h','e','l','l','o'};
  int n=sizeof(word)/sizeof(word[0]);
  revChar(word,n);
    for(int i=0;i<n;i++){
        cout<<(char)word[i];
    }


}