#include<iostream>
using namespace std;

  int main(){
          int arr[]={-5,-6,3,9,2,-8,6};
          int n= sizeof(arr)/sizeof(arr[0]);

          for(int i=0; i<n; i+=2){
                    cout<<arr[i]<<" ";
          }
return 0;

  }