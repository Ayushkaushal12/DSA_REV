// #include<iostream>  
// using namespace std;
// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         for (int j = 0; j < n-i-1; j++) {
//             if (arr[j] > arr[j+1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }
// int main() {
//     int arr[] = {3, 2, 5, 1, 4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     bubbleSort(arr, n);
//     cout << "Sorted array: \n";
//     for (int i=0; i < n; i++)
//         cout << arr[i] << " ";
//     return 0;
// }

// This is code for selection sort

// #include<iostream> 
// #include<algorithm>  
// #include <ostream>
// using namespace std;
// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         int min_idx = i;
//         for (int j = i+1; j < n; j++) {
//             if (arr[j] < arr[min_idx]) {
//                 min_idx = j;
//             }
//         }
//         swap(arr[min_idx], arr[i]);
//     }
//     cout << "Sorted array: \n";
//     for (int i = 0; i < n; i++)
//         cout << arr[i ] << " ";
// }
// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     selectionSort(arr, n);
//     // cout << "Sorted array: \n";
//     // for (int i=0; i < n; i++)
//     //     cout << arr[i] << " ";
//     // return 0;
// }

// this is code for count sort


#include<iostream>
using namespace std;
void countSort(int arr[],int n){
    int freq[100] = {0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int index = 0;
    for(int i=0;i<100;i++){
        while(freq[i]--){
            arr[index++] = i;
        }
    }


}
int main(){
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    countSort(arr,n);
    cout << "Sorted array: \n";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}