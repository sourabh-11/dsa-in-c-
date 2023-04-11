#include<bits/stdc++.h>
using namespace std;

bool pairInSortedRotated(int arr[],int N,int X)
{
    int i;
    for(int i =0;i<N-1;i++)
    if(arr[i]<arr[i+1])
    break;
      int l = (i + 1) % N;
 
    // r is now index of largest element
    int r = i;
 
    // Keep moving either l or r till they meet
    while (l != r) {
 
        // If we find a pair with sum x,
        // we return true
        if (arr[l] + arr[r] == X)
            return true;
 
        // If current pair sum is less,
        // move to the higher sum
        if (arr[l] + arr[r] < X)
            l = (l + 1) % N;
 
        // Move to the lower sum side
        else
            r = (N + r - 1) % N;
    }
    return false;

}

int main()
{
     int arr[] = { 11, 15, 6, 8, 9, 10 };
    int X = 16;
    int N = sizeof(arr) / sizeof(arr[0]);
     if (pairInSortedRotated(arr, N, X))
        cout << "true";
    else
        cout << "false";
    return 0;
}