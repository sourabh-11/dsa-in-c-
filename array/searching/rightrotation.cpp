#include<iostream>
using namespace std;
int rotation(int arr[],int d,int n)
{
    int p=1;
    while(p<=d)
    {
    int first= arr[n-1];
    for(int i=n-1;n>=0;n--)
    {
        arr[n-1]=arr[i];
    }
       arr[0]=first;
       p++;
    }
}
void printarray(int arr[],int N)
{
    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{

    int arr[]={1,2,3,4,5,6};
    int N =sizeof(arr)/sizeof(arr[0]);
    int d =2;
    rotation(arr,d,N);
    printarray(arr,N);
    return 0;
}