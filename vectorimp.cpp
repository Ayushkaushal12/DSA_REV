#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    v.push_back(6);
    cout<<"Vector elements: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    // cout<<v[i]<<endl;
    cout<<"Vector size: "<<v.size()<<endl;
    cout<<"Vector capacity: "<<v.capacity()<<endl;
}