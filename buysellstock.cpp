// Give me code for buy and sell stock problem in C++98
#include <iostream>
#include <climits>
using namespace std;
int maxProfit(int *prices, int n) {
    int bestBuy[10000]; 
    bestBuy[0]=INT_MAX;
    for(int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
    }
    int maxProfit=0;
    for(int i=1;i<n;i++){
        maxProfit=max(maxProfit,prices[i]-bestBuy[i]);
    }
    return maxProfit;
}
int main() {
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum profit: " << maxProfit(arr, n) << endl;
    return 0;
}