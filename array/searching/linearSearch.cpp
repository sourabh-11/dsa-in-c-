#include<iostream>
using namespace std;
int search(int arr[],int key,int N){
    for(int i=0;i<N;i++)
        if(arr[i]==key)
        return i;
        return -1;
}
int main()
{


  int arr[]={2,4,9,7,5,6,1};
  int key =7;
  int N= sizeof(arr)/sizeof(arr[0]);

 int result = search(arr,key,N);
   (result==-1) ? cout<<"element is not present" : cout<<"element presemt at index="<<result;
   return 0;

}
    

