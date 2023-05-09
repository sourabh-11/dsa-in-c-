// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

int RotationArray(int arr[], int d, int size)
{  int p = 1;
    while (p <= d) {
        int last = arr[0];
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[size - 1] = last;
        p++;
    }

}
int printArray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main()
{  int arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int d=2;
     RotationArray(arr,d,size);
     printArray(arr,size);

    return 0;
}