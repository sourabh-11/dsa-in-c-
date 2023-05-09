#include<bits/stdc++.h>
using namespace std;


void reverseArray(int arr[],int start,int end)
{
    if(start>=end)
    return;
    int temp =arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
     reverseArray(arr,start+1,end-1);

}


int printarray(int arr[],int N)
{
    for(int i =0;i<N;i++)
   cout<<arr[i]<< "";
   cout<<endl;
}


int main()
{
    int arr[]={1,2,3,4,5,6};
    // int N = sizeof(arr)/sizeof(arr[0]);
    printarray(arr,6);
    reverseArray(arr,0,5);
    printarray(arr,6);


    return 0;
}