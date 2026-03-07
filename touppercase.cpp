#include<iostream>
#include<string>
using namespace std;
void touppercase(char arr[], int n ){
    for(int i=0;i<n;i++){
        char ch = arr[i];
        if(ch>='a' && ch<='z'){
            arr[i] = ch - ('a' - 'A');
        }   
    }
}
int main(){
    char arr[]="ApPle";
    int n = sizeof(arr)/sizeof(char);
    touppercase(arr,n);
    cout<<arr<<endl;

}