#include<iostream>
#include<string>
using namespace std;
void tolowercase(char arr[], int n ){
    for(int i=0;i<n;i++){
        char ch = arr[i];
        if(ch>='A' && ch<='Z'){
            arr[i] = ch + ('a' - 'A');
        }   
    }
}
int main(){
    char arr[]="ApPle";
    int n = sizeof(arr)/sizeof(char);
    tolowercase(arr,n);
    cout<<arr<<endl;

}