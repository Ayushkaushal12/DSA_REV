// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[5]={3, 2, 5, 1, 4};
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }

//         }
//         cout<<arr[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={3, 2, 5, 1, 4};
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }

//         }
//         cout<<arr[i]<<" ";
//     }
// }

// write a code for bubble sort in C++98:
#include<iostream>  

using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {3, 2, 5, 1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array: \n";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}